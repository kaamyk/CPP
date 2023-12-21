#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ){}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& source){
    *this = source;
}

BitcoinExchange::~BitcoinExchange( void ){}

BitcoinExchange const& BitcoinExchange::operator=( BitcoinExchange const& source ){
    _inputs = source._inputs;
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
    std::cout << "parseValue => value == " << value << std::endl;
    if ( value.find_first_not_of("1234567890.") != std::string::npos ){
        std::cout << "a" << std::endl;
        return (1);
    }
    else if (value.find('.') == std::string::npos){
        std::cout << "b" << std::endl;
        return (value.size() > 4
            || (value.size() == 4 && value.compare("1000") > 0) );
    }
    else{
        std::cout << "c" << std::endl;
        return (value.size() > 5
             || value.find_first_of('.') != value.find_last_of('.')
             || value.find('.') == 0
             || value.find('.') == value.size() );
    }
    return (0);
}

void    BitcoinExchange::splitLine( std::string const& line, std::map<std::string, std::string>& splitedLine ) const{
    size_t  i = 0;
    while ( i < line.size() && line[i] != ' ' )
        ++i;
    if ( i < 9 || parseDate(line.substr(0, i)) ){
        return (throw InvalidDate());
    }
    splitedLine["key"] = line.substr(0, i);
    if ( i + 3 >= line.size() || parseValue(line.substr(i + 3, line.size())) )
        return (throw InvalidValue());
    i += 3;
    splitedLine["value"] = line.substr(i, line.size());
}

void    BitcoinExchange::readInputFile( const char* fileName ){
    std::ifstream   inputFile(fileName);

    if (!inputFile.is_open()){
        throw FileNotOpen();
    }

    std::string line;
    std::map<std::string, std::string>  splitedLine;

    while (std::getline(inputFile, line)){
        std::cout << "line: " << line << std::endl;
        try{
            splitLine(line, splitedLine);
            std::cout << "splitLine[key]: [" << splitedLine["key"] << "]" <<  std::endl;
            std::cout << "splitLine[value]: [" << splitedLine["value"] << "]" <<  std::endl;
        }
        catch( std::exception const& e){
            std::cerr << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
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