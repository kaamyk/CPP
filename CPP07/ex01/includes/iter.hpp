#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

template <typename A, typename F>
void _iter(A* p, size_t l, F func)
{
    for (unsigned int i = 0; i < l; ++i)
        func(p[i]);
    return ;
}

template <typename T>
void    _addOne(T& n)
{
    ++n;
    return ;
}

#endif