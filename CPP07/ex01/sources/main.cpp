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
        ::iter<int>(tab, l, &addOne<int>);
        for (unsigned int i = 0; i < l; ++i)
            std::cout << "tab[" << i << "] == " << tab[i] << std::endl;
    }
    return (0);
}