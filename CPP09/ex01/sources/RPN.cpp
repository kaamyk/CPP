#include "../includes/RPN.hpp"

const char* WrongFormat::what( void ) const throw(){
    return ("Error: the string passed parameter is in a wrong format.");
}

const char* DivisionByZero::what( void ) const throw(){
    return ("Error: Division by Zero is impossible.");
}