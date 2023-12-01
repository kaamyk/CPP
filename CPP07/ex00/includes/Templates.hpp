#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>

template<typename T> T _max(T a, T b)
{
    return (a > b ? a : b);
}

template<typename T> T _min(T a, T b)
{
    return (a < b ? a : b);
}

template<typename T> void _swap(T& a, T& b)
{
    T  tmp;

    tmp = a;
    a = b;
    b = tmp;
}

#endif