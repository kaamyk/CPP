#include <iostream>

#include "../includes/Array.hpp"

int main(void)
{
    Array<int> a;
    Array<int> b(4);

    std::cout << "\t--- Tests exceptions ---" << std::endl;
    try{
        std::cout << a[5] << std::endl;
        std::cout << b[5] << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "\t--- Tests deep copy ---" << std::endl;
    {
        Array<int> tmp(a);
        ( void ) tmp;
        tmp[0] = 7;
        std::cout << "tmp[0] == " << tmp[0] << std::endl;
        std::cout << "a[0] == " << a[0] << std::endl;
    }
    std::cout << a[3] << std::endl;
    std::cout << "\t--- Tests assignation ---" << std::endl;
    b[0] = 2;
    b[1] = 3;
    b[2] = 6;
    b[3] = 7;
    for (unsigned int i = 0; i < 4; ++i){
        std::cout << "a[" << i << "] == " << a[i] << std::endl;
        std::cout << "b[" << i << "] == " << b[i] << std::endl;
    }
   return (0);
}