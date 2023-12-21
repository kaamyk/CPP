#ifndef BITCOINEXCH
#define BITCOINEXCH

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <exception>

class BitcoinExchange
{
private:
    std::map<std::string, int>  _inputs;
    
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

    bool    parseDate( std::string date ) const; 
    bool    parseValue( std::string value ) const; 
    void    splitLine( std::string const& line, std::map<std::string, std::string>& splitLine ) const;
    void    readInputFile( const char* fileName );
};

#endif