#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <exception>
# include <iterator>
# include <deque>
# include <stack>

template< typename T, typename container = std::deque<T> >
class MutantStack: public std::stack<T, container>
{
public:
    MutantStack( void ): std::stack<T, container>() {}
    MutantStack( MutantStack const& source ): std::stack<T, container>(){*this = source;}
    ~MutantStack( void ){}

    MutantStack&    operator=( MutantStack const& source ){
        std::stack<T, container>::operator=(source);
        return (*this);
    }

    // class   StackEmpty: public std::exception
    // {
    // public:
    //     virtual const char* what( void ) const throw(){
    //         return ("Error: Stack not stacked or allocated.");
    //     }
    // }
    typedef typename container::iterator    iterator;
    iterator    begin( void ){return this->c.begin();}
    iterator    end( void ){return this->c.end();}
};

#endif