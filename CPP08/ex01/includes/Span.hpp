#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
    std::vector<int>    _container;
    size_t              _maxSize;

public:
    Span( void );
    Span( unsigned int N );
    Span( Span const& source );
    ~Span();

    Span&   operator=( Span const& source );

    class MaxSize: public std::exception
    {
    public:
        virtual const char* what( void ) const throw();
    };

    class NotEnoughElements: public std::exception
    {
    public:
        virtual const char* what( void ) const throw();
    };


    void    addNumber( int n );
    int     longestSpan( void );
    int     shortestSpan( void );
};

#endif