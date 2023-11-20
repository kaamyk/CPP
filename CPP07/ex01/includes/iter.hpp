#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>void iter(T* p, size_t l, void (*f)(T& arg))
{
    for (unsigned int i = 0; i < l; ++i)
        f(p[i]);
    return ;
}

#endif