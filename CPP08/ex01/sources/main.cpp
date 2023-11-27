#include "../includes/Span.hpp"

int main( void )
{
    {
        std::cout << "\t--- Testing Exceptions ---" << std::endl;
        Span    s(3);

        try{
            s.addNumber(4);
            s.addNumber(2);
            s.addNumber(3);
            s.addNumber(1);
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "\t--- Testing shortes/longest span ---" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        return 0;
    }
    {
        std::cout << "\t--- Testing with big number of elements ---" << std::endl;
    }
    return (0);
}