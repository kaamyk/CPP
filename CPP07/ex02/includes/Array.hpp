#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

template <typename T>
class   Array
{
private:
    size_t  _l;
    T*      _array; 

public:
    Array( void ): _l(0), _array(NULL) {}
    
    Array( unsigned int n ): _l(n), _array(new T[n]){}
    
    Array( Array const& source ):_l(source._l), _array(new T[_l]){}

    Array&  operator=( Array const& source ){
        if (_l != source._l){
            delete [] _array;
            _l = source._l;
            _array = new T[_l];
        }
        for(unsigned int i = 0; i < _l; ++i)
            _array[i] = source._array[i];
        return (*this);
    }

    T&  operator[]( int r ){
        if (r < 0 || (size_t)r >= _l)
            throw OutOfBounds();
        return (_array[r]);
    }
    
    ~Array( void ){delete [] _array;}

    size_t  size( void ){return (_l);}

    class   OutOfBounds: public std::exception
    {
        virtual char const*    what( void ) const throw(){
            return ("error: Rank out of bounds.");
        } 
    };
};

# endif