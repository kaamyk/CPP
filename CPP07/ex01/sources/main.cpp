#include "../includes/iter.hpp"

int main( void )
{
    {
	    std::srand(std::time(NULL));
        int*    tab;
        size_t  l = 10;

        tab = new int[l];
        for (unsigned int i = 0; i < l; ++i){
            tab[i] = rand() % 30;
            std::cout << "tab[" << i << "] == " << tab[i] << std::endl; 
        }
        std::cout << std::endl;
        ::_iter(tab, l, &_addOne<int>);
        for (unsigned int i = 0; i < l; ++i)
            std::cout << "tab[" << i << "] == " << tab[i] << std::endl;
        delete [] tab;
    }
    std::cout << "--------------------" << std::endl;
    {
	    std::srand(std::time(NULL));
        char*    tab;
        size_t  l = 10;

        tab = new char[l];
        for (unsigned int i = 0; i < l; ++i){
            tab[i] = (rand() % 30) + 33;
            std::cout << "tab[" << i << "] == " << tab[i] << std::endl;
        }
        std::cout << std::endl;
        ::_iter(tab, l, &_addOne<char>);
        for (unsigned int i = 0; i < l; ++i)
            std::cout << "tab[" << i << "] == " << tab[i] << std::endl;
        delete [] tab;
    }
    return (0);
}