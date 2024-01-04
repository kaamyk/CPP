#include "../includes/BitcoinExchange.hpp"

int main( int argc, char** argv ){
    BitcoinExchange BitcoinExchanger;

    if (argc < 2){
        std::cout << "Error: too few arguments. You must type a valid file name." << std::endl;
        return (1);
    }
    else if (argc > 2){
        std::cerr << "Error: too much arguments. Only one file is required." << std::endl;
    }
    try{
        BitcoinExchanger.run(argv[1]);
    }
    catch( std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}