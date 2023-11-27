#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <iterator>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

class NotFoundException: public std::exception
{
public:
    virtual const char*    what( void ) const throw(){
        return ("To find not found.");
    } 
};

template<typename T>
typename T::iterator  easyfind(T container , int toFind){
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    if (it == container.end())
        throw NotFoundException();
    return (it);
}

#endif