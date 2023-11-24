#include "../includes/Templates.hpp"

int main( void )
{
    {
        int a = 8;
        int b = 6;

        std::cout << "a == 8 && b == 6" << std::endl;
        std::cout << max<int>(a, b) << std::endl;
        std::cout << min<int>(a, b) << std::endl;
        swap<int>(a, b);
        std::cout << "a == " << a << std::endl;
        std::cout << "b == " << b << std::endl;
        std::cout << std::endl;
    }
    {
        char a = 'O';
        char b = 'K';

        std::cout << "a == " << a << " && b == " << b << std::endl;
        std::cout << max<char>(a, b) << std::endl;
        std::cout << min<char>(a, b) << std::endl;
        swap<char>(a, b);
        std::cout << "a == " << a << " && b == " << b << std::endl;
        std::cout << std::endl;
    }
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    return (0);
}