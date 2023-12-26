#ifndef REVERSEPOLISHNOTATION
#define REVERSEPOLISHNOTATION

#include <iostream>
#include <stack>

class ReversePolishNotation
{
private:
    std::stack<std::string> op; 
public:
    ReversePolishNotation( void );
    ReversePolishNotation( ReversePolishNotation const& source );
    ~ReversePolishNotation( void );

    ReversePolishNotation&    operator=( ReversePolishNotation const& source );

    void    calculate( std::string& arg );
};

#endif