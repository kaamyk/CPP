#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base*   generate( void )
{
    int r = rand() % 3;

    switch(r){
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
        default:
            return (NULL);
    }
}

void    identify( Base* p )
{
    if (dynamic_cast<A *>(p))
            std::cout << "Class A detected" << std::endl;
        else if (dynamic_cast<B *>(p))
            std::cout << "Class B detected" << std::endl;
        else if (dynamic_cast<C *>(p))
            std::cout << "Class C detected" << std::endl;
        else
            std::cout << "Unknown class" << std::endl;
    return ;
}

void    identify( Base& p )
{
    try{
        dynamic_cast<A&>(p);
        std::cout << "Class A detected" << std::endl;
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    try{
        dynamic_cast<B&>(p);
        std::cout << "Class B detected" << std::endl;
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    try{
        dynamic_cast<C&>(p);
        std::cout << "Class C detected" << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return ;
}

int main( void )
{
    {
	    std::srand(std::time(NULL));
        Base*   T = generate();

        identify(T);
        identify(*T);
        delete T;
    }
    return (0);
}