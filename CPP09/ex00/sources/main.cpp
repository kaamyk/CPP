#include "../includes/BitcoinExchange.hpp"

int main( int argc, char** argv ){
    BitcoinExchange BitcoinExchanger;

    if (argc < 2){
        std::cout << "Error: too few arguments." << std::endl;
        return (1);
    }
    else if (argc > 2){
        std::cerr << "Argument hint: Too much argument. Only the first one will be considered." << std::endl;
    }
    try{
        BitcoinExchanger.readInputFile(argv[1]);
    }
    catch( std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}