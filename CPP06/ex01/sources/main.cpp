#include "../includes/Serializer.hpp"

int main( void )
{
    Serializer  S;
    Data        D;
    uintptr_t   uiptr = 0;
    Data*       Dptr = NULL;
    
    D.i = 42;
    D.s = "string";

    uiptr = S.serialize(&D);
    std::cout << "&Data == " << &D << std::endl;
    std::cout << "uiptr (function) == " << uiptr << std::endl;

    std::cout << "Printing infos from the pointer and compare to original:" << std::endl;
    Dptr = S.deserialize(uiptr);
    std::cout << "Dptr == " << Dptr << std::endl;
    std::cout << "&D == " << &D << std::endl;
    std::cout << "Dptr->int == " << Dptr->i << std::endl;
    std::cout << "D->int == " << D.i << std::endl;

    return (0);
}