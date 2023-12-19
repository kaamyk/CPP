#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ){}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& source){
    *this = source;
}

BitcoinExchange::~BitcoinExchange( void ){}

BitcoinExchange const& BitcoinExchange::operator=( BitcoinExchange const& source ){
    ( void ) source;
    return (*this);
}

void    BitcoinExchange::readInputFile( std::string fileName ){
    std::ifstream   inputFile;

    try{
        inputFile.open(fileName, std::ifstream::in);
    }
    catch(std::exception& e){
        std::cout << "Error: Failed to open the file:" << e.what() << std::endl;
        return ;
    }
}