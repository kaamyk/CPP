#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ){}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& source ){
    *this = source;
}

BitcoinExchange::~BitcoinExchange( void ){}

BitcoinExchange const& BitcoinExchange::operator=( BitcoinExchange const& source ){
    // _inputData = source._inputData;
    _inputKey = source._inputKey;
    _inputValue = source._inputValue;
    _csvData = source._csvData;
    return (*this);
}

bool    BitcoinExchange::parseDate( std::string date ) const {
    if ( date.substr(0, 4).compare("2009") < 0 )
        return (1);
    size_t  i = 0;
    while (i < 4){
        if (!std::isdigit(date[i]))
            return (1);
        ++i;
    }
    if (date[i] != '-')
        return (1);
    ++i;
    if ( date.substr(i, 2).compare("12") > 0 || date.substr(i, 2).compare("01") < 0 ){
        std::cout << "Invalid mounth" << std::endl;
        return (1);
    }
    while (i < 7){
        if (!std::isdigit(date[i]))
            return (1);
        ++i;
    }
    if (date[i] != '-')
        return (1);
    ++i;
    if ( date.size() - i != 2 || date.substr(i, i + 2).compare("31") > 0 || date.substr(i, i + 2).compare("01") < 0 ){
        std::cout << "Invalid Day" << std::endl;
        return (1);
    }
    while (i < date.size()){
        if (!std::isdigit(date[i]))
            return (1);
        ++i;
    }
    return (0);
}

bool    BitcoinExchange::parseValue( std::string value ) const {
    std::stringstream    ss;

    std::cout << value << " => ";

    ss.clear();
    ss << value;
    float    n_value = 0;
    ss >> n_value;
    std::cout << std::setprecision(value.size()) << n_value << std::endl;
    return (n_value < 0.0f || n_value > 1000.0f);
}

void    BitcoinExchange::mapCsvFile( void ){
    std::ifstream csvFile("data.csv");

    if (!csvFile.is_open()){
        throw FileNotOpen();
    }

    std::string dataLine;
    std::string tmpKey;

    std::getline(csvFile, dataLine);
    while (!dataLine.empty()){
        tmpKey = dataLine.substr(0, dataLine.find(','));    
        dataLine.find(',') != std::string::npos ? _csvData[tmpKey] = dataLine.substr(dataLine.find(',') + 1, dataLine.size()) :  _csvData[tmpKey] = "";
        std::getline(csvFile, dataLine);
    }
    csvFile.close();
}

void    BitcoinExchange::printResult( std::string date, std::string amount, std::string value ){
    std::stringstream    ss;

    std::cout << date << " => ";

    ss.clear();
    ss << amount;
    float    n_amount = 0;
    ss >> n_amount;
    std::cout << n_amount << " = ";

    ss.clear();
    ss << value;
    float    n_value = 0;
    ss >> n_value;
    std::cout << std::setprecision(value.size()) << n_amount * n_value << std::endl;
}

void    BitcoinExchange::calculateAmoutValue( void ){
    if ( _csvData.find(_inputValue) != _csvData.end() ){
        printResult( _inputKey, _inputValue, _csvData[_inputKey] );
    }
    else{
        std::map<std::string, std::string>::iterator it = _csvData.begin();
        while (it != _csvData.end() && (it->first.compare(_inputKey) < 0)){
            ++it;
        }
        if (it == _csvData.begin()){
            printResult( _inputKey, _inputValue, it->second );
        }
        else {
            std::map<std::string, std::string>::iterator itPrev = it;
            if (itPrev != _csvData.begin())
                --itPrev;
            printResult( _inputKey, _inputValue, itPrev->second );
        }
    }
}

void    BitcoinExchange::splitLine( std::string const& line ){
    size_t  i = 0;
    while ( i < line.size() && line[i] != ' ' )
        ++i;
    if ( i < 9 || parseDate(line.substr(0, i)) ){
        return (throw InvalidDate());
    }
    _inputKey = line.substr(0, i);
    if ( i + 3 >= line.size() || parseValue(line.substr(i + 3, line.size())) )
        return (throw InvalidValue());
    i += 3;
    _inputValue = line.substr(i, line.size());
    // std::cout << "_inputKey -> " << _inputKey << std::endl;
    // std::cout << "_inputValue -> [" << _inputValue << "]" <<  std::endl;
}

void    BitcoinExchange::run( const char* fileName ){
    std::ifstream   inputFile(fileName);

    if (!inputFile.is_open()){
        throw FileNotOpen();
    }

    mapCsvFile();
    std::string line;
    while (std::getline(inputFile, line)){
        std::cout << "line: " << line << std::endl;
        _inputValue.clear();
        try{
            splitLine(line);
            calculateAmoutValue();
        }
        catch( std::exception const& e){
            std::cerr << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    
    inputFile.close();
}

            /********************************/
            /*  Exceptions / Error Handling */
            /********************************/

const char* BitcoinExchange::FileNotOpen::what( void ) const throw(){
    return ("Error: Input file did not open.");
}

const char* BitcoinExchange::InvalidDate::what( void ) const throw(){
    return ("Error: the date passed as input is invalid.");
}

const char* BitcoinExchange::InvalidValue::what( void ) const throw(){
    return ("Error: the value passed as input is invalid.");
}