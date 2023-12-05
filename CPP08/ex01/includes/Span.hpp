#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>

class Span
{
private:
    unsigned int        _maxSize;
    std::vector<int>    _container;

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

    std::vector<int>::iterator    getContainerBegin( void );
    std::vector<int>::iterator    getContainerEnd( void );

    void    addNumber( int n );
    int     longestSpan( void );
    int     shortestSpan( void );
    void    addLotNumbers( std::vector<int>::iterator begin, std::vector<int>::iterator end );
};

#endif