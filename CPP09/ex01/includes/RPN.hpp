#ifndef REVERSEPOLISHNOTATION
#define REVERSEPOLISHNOTATION

#include <iostream>
#include <iomanip>
#include <stack>
#include <exception>
#include <sstream>

class   WrongFormat: public std::exception
{
    public:
        virtual const char* what( void ) const throw();
};

#endif