#include "../includes/RPN.hpp"

#include <iostream>

void    joinArgs( char** argv, std::string& res ){
    for(size_t i = 0; argv[i]; ++i){
            res.append(argv[i]);
    }
}

int main( int argc, char** argv ){
    std::string res;
    
    joinArgs(argv, res);
    return (0);
}