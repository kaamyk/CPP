#include "../includes/Span.hpp"

Span::Span( void ): _maxSize(10)
{
    return ;
}

Span::Span( unsigned int N ): _maxSize(N)
{
    return ;
}

Span::Span( Span const& source )
{
    *this = source;
    return ;
}

Span::~Span()
{
    return ;
}

Span&   Span::operator=( Span const& source )
{
    _container = source._container;
    _maxSize = source._maxSize;
    return (*this);
}

const char* Span::MaxSize::what( void ) const throw()
{
    return ("Error: the container is already Max Sized");
}

const char* Span::NotEnoughElements::what( void ) const throw()
{
    return ("Error: the container does not have enough elements.");
}

std::vector<int>::iterator    Span::getContainerBegin( void )
{
    return (_container.begin());
}

std::vector<int>::iterator    Span::getContainerEnd( void )
{
    return (_container.end());
}

void    Span::addLotNumbers( std::vector<int>::iterator begin, std::vector<int>::iterator end )
{
    size_t  d = std::distance(begin, end);
    if (d == 0)
        return ;
    else if (d > _maxSize - _container.size())
        throw MaxSize();
    _container.insert(_container.end(), begin, end);
    return ;
}

void    Span::addNumber( int n )
{
    if (_container.size() >= _maxSize)
        throw Span::MaxSize();
    _container.push_back(n);
    return ;
}

int     Span::longestSpan( void )
{
    if (_container.size() <= 1)
        throw Span::NotEnoughElements();
    std::vector<int>    sorted(_container);
    std::sort(sorted.begin(), sorted.end());
    return (sorted.back() - sorted.front());
}

int     Span::shortestSpan( void )
{
    if (_container.size() <= 1)
        throw Span::NotEnoughElements();
    int res = 0;
    std::vector<int>    sorted(_container);
    std::sort(sorted.begin(), sorted.end());

    res = sorted.at(1) - sorted.at(0);
    for(unsigned int i = 1; i + 1 < sorted.size(); ++i){
        if (sorted.at(i + 1) - sorted.at(i) < res)
            res = sorted.at(i + 1) - sorted.at(i);
    }
    return (res);
}