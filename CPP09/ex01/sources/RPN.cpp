#include "../includes/RPN.hpp"

ReversePolishNotation::ReversePolishNotation( void ){
    return ;
}

ReversePolishNotation::ReversePolishNotation( ReversePolishNotation const& source ){
    *this = source;
}

ReversePolishNotation::~ReversePolishNotation ( void ){
    return ;
}

ReversePolishNotation&  ReversePolishNotation::operator=( ReversePolishNotation const& source ){
    (void)source;
    return (*this);
}