#include "../includes/iter.hpp"
#include <ctime>

void    addOne(T& n)
{
    ++t;
    return ;
}

int main( void )
{
    {
	    std::srand(std::time(NULL));
        int*    tab;
        size_t  l = 10;

        tab = new int[l];
        for (unsigned int i = 0; i < l; ++i)
            tab[i] = rand() % 30;
        ::iter<int>(tab, l, addOne);
    }
    return (0);
}