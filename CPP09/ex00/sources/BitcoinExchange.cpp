#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ){}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& source){
    *this = source;
}

BitcoinExchange::~BitcoinExchange( void ){}

BitcoinExchange const& BitcoinExchange::operator=( BitcoinExchange const& source ){
    _inputData = source._inputData;
    _csvData = source._csvData;
    return (*this);
}

bool    BitcoinExchange::parseDate( std::string date ) const {
    const std::string   numChar = "1234567890";
    if ( date.substr(0, 4).compare("2009") < 0 )
        return (1);
    size_t  i = 0;
    while (i < 4){
        if (numChar.find(date[i]) == std::string::npos)
            return (1);
        ++i;
    }
    if (date[i] != '-')
        return (1);
    ++i;
    if ( date.substr(i, i + 2).compare("12") > 0 ){
        std::cout << "Invalid mounth" << std::endl;
        return (1);
    }
    while (i < 7){
        if (numChar.find(date[i]) == std::string::npos)
            return (1);
        ++i;
    }
    if (date[i] != '-')
        return (1);
    ++i;
    if (date.size() - i != 2 || date.substr(i, i + 2).compare("31") > 0){
        std::cout << "Invalid Day" << std::endl;
        return (1);
    }
    while (i < date.size()){
        if (numChar.find(date[i]) == std::string::npos)
            return (1);
        ++i;
    }
    return (0);
}

bool    BitcoinExchange::parseValue( std::string value ) const {
    if ( value.find_first_not_of("1234567890.") != std::string::npos )
        return (1);
    else if (value.find('.') == std::string::npos)
        return (value.size() > 4
            || (value.size() == 4 && value.compare("1000") > 0) );
    else
        return (value.size() > 5
             || value.find_first_of('.') != value.find_last_of('.')
             || value.find('.') == 0
             || value.find('.') == value.size() );
    return (0);
}

void    BitcoinExchange::splitLine( std::string const& line ){
    size_t  i = 0;
    while ( i < line.size() && line[i] != ' ' )
        ++i;
    if ( i < 9 || parseDate(line.substr(0, i)) ){
        return (throw InvalidDate());
    }
    std::string key = line.substr(0, i);
    if ( i + 3 >= line.size() || parseValue(line.substr(i + 3, line.size())) )
        return (throw InvalidValue());
    i += 3;
    _inputData[key] = line.substr(i, line.size());
    std::cout << "_inputData-> " << key;
    std::cout << "_inputData[key]: [" << _inputData[key] << "]" <<  std::endl;
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
        dataLine.find(',') != std::string::npos ? _csvData[tmpKey] = dataLine.substr(0, dataLine.find(',')) :  _csvData[tmpKey] = "";
        std::getline(csvFile, dataLine);
    }
    csvFile.close();
}

void    BitcoinExchange::printResult( std::string date, std::string amount, std::string value ){
    std::stringstream    ss;

    ss << amount;
    unsigned int    n_amount;
    ss >> n_amount;

    ss << value;
    unsigned int    n_value;
    ss >> n_value;

    std::cout << date << " => " << amount << " = " << (n_amount * n_value) << std::endl;
}

void    BitcoinExchange::calculateAmoutValue( std::map<std::string, std::string>::iterator& itIn ){
    if ( _csvData.find(itIn->second) != _csvData.end() ){
        // Exact Value found
    }
    else{
        std::map<std::string, std::string>::iterator it = _csvData.begin();
        while (it != _csvData.end() && it->first.compare(itIn->second) < 0){
            ++it;
        }
        if (it == _csvData.end()){
            // Wanted data =>_csvData.end()
            printResult( itIn->first,
            itIn->second,
            _csvData.end()->second );
        }
        else if (it != _csvData.begin()){
            // Wanted value => _csvData.begin()
            printResult( itIn->first, itIn->second, _csvData.begin()->second );
        }
        else {
            // Wanted value => it->first.compare(input_inputData["key"]) || (--it)->first.compare(input_inputData["key"])
            std::map<std::string, std::string>::iterator itPrev = it;
            --itPrev;
            it->first.compare(_inputData["key"]) < (-1) * itPrev->first.compare(_inputData["key"]) ? printResult( itIn->first, itIn->second, it->second ) : printResult( itIn->first, itIn->second, itPrev->second );
        }
    }
}

void    BitcoinExchange::readInputFile( std::ifstream& inputFile ){

    std::string line;
    while (std::getline(inputFile, line)){
        std::cout << "line: " << line << std::endl;
        try{
            splitLine(line);
        }
        catch( std::exception const& e){
            std::cerr << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
}

void    BitcoinExchange::run( const char* fileName ){
    std::ifstream   inputFile(fileName);

    if (!inputFile.is_open()){
        throw FileNotOpen();
    }

    readInputFile( inputFile );
    mapCsvFile();
    for (std::map<std::string, std::string>::iterator it = _inputData.begin(); it != _inputData.end(); it++){
        std::cout << "_inputData =>" << it->first << ": " << it->second << std::endl;
        // calculateAmoutValue(it);
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