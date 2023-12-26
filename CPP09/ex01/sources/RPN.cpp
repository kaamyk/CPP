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
    op = source.op;
    return (*this);
}

void    ReversePolishNotation::calculate( std::string& arg ){
    
}