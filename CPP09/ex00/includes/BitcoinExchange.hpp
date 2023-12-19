#ifndef BITCOINEXCH
#define BITCOINEXCH

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
private:
    std::map<std::string, int>  _inputs;
    
public:
    BitcoinExchange( void );
    BitcoinExchange( BitcoinExchange const& source );
    // BitcoinExchange( args );
    ~BitcoinExchange( void );

    BitcoinExchange const&  operator=( BitcoinExchange const& source );

    void    readInputFile( std::string fileName );
};

#endif