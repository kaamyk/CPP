#include "../includes/Templates.hpp"

int main( void )
{
    {
        long a = 8;
        long b = 6;

        std::cout << "a == 8 && b == 6" << std::endl;
        std::cout << ::_max<long>(a, b) << std::endl;
        std::cout << ::_min<long>(a, b) << std::endl;
        ::_swap<long>(a, b);
        std::cout << "a == " << a << std::endl;
        std::cout << "b == " << b << std::endl;
        std::cout << std::endl;
    }
    {
        char a = 'O';
        char b = 'K';

        std::cout << "a == " << a << " && b == " << b << std::endl;
        std::cout << ::_max<char>(a, b) << std::endl;
        std::cout << ::_min<char>(a, b) << std::endl;
        ::_swap<char>(a, b);
        std::cout << "a == " << a << " && b == " << b << std::endl;
        std::cout << std::endl;
    }
    {
        int a = 2;
        int b = 3;
        ::_swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::_min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::_max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::_swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::_min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::_max( c, d ) << std::endl;
    }
    return (0);
}