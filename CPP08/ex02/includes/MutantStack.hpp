#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <exception>
# include <vector>

template<typename T>
class MutantStack
{
private:
    size_t          _size;
    std::vector<T>  _container;

public:
    MutantStack( void ): _size(0) {return ;}

    MutantStack( MutantStack const& source ){*this = source;}

    ~MutantStack( void ){return ;};

    MutantStack&    operator=( Mutant stack const& source ){
        _size = source._size;
        _container = source._container;
        return (*this);
    }

    class   StackEmpty: public std::exception
    {
    public:
        virtual const char* what( void ) const throw(){
            return ("Error: Stack not stacked or allocated.");
        }
    }

    

    bool    empty( void ){ return (_size ? 0 : 1); }
    size_t  size( void ){return (_size)}
    T       top( void ){return (_size ? _container[0] : throw StackEmpty());}
    void    push( T& el ){_container.insert(0, el);}
    void    emplace( T el ){
        T   nEl(el);
        this->push(nEl);
        return ;
    }
    void    pop( void ){_size ? _container.erase(0) : throw StackEmpty()}
    void    swap( std::vector<T>& x ){_container.swap(x);}
};

#endif