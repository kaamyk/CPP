#ifndef BITCOINEXCH
#define BITCOINEXCH

#include <iostream>
#include <iomanip>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <exception>

class BitcoinExchange
{
private:
    // std::map<std::string, std::string>  _inputData;
    std::string _inputKey;
    std::string _inputValue;
    std::map<std::string, std::string>  _csvData;

    bool    parseDate( std::string date ) const; 
    bool    parseValue( std::string value ) const; 
    void    splitLine( std::string const& line );
    void    mapCsvFile( void );
    std::string    readInputFile( std::ifstream& inputFile );
    void    calculateAmoutValue( void );
    void    printResult( std::string date, std::string amount, std::string value );
    
public:
    BitcoinExchange( void );
    BitcoinExchange( BitcoinExchange const& source );
    ~BitcoinExchange( void );

    BitcoinExchange const&  operator=( BitcoinExchange const& source );

    class   FileNotOpen: public std::exception{
        public:
            virtual const char* what( void ) const throw();
    };
    class   InvalidDate: public std::exception{
        public:
            virtual const char* what( void ) const throw();
    };
    class   InvalidValue: public std::exception{
        public:
            virtual const char* what( void ) const throw();
    };

    void    run( const char* fileName );
};

#endif