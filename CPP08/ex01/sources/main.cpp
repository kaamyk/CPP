#include "../includes/Span.hpp"
#include <ctime>
#include <cstdlib>

int main( void )
{
    srand(time(NULL));
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
    std::cout << std::endl;
    {
        std::cout << "\t--- Testing shortes/longest span ---" << std::endl;
        Span sp = Span(5);
        try{
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << "\t--- Testing with big number of elements ---" << std::endl;
        std::vector<int>    v;
        for (unsigned int i = 0; i < 10000; ++i)
            v.push_back(rand());
        Span    s(10000);
        Span    s1(10);
        // Span    s;

        try{
            s.addLotNumbers(v.begin(), v.end());
            std::cout << "Longest Span == " << s.longestSpan() << std::endl;
            std::cout << "Shortest Span == " << s.shortestSpan() << std::endl;
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
        try{
            s1.addLotNumbers(v.begin(), v.end());
            std::cout << "Longest Span == " << s1.longestSpan() << std::endl;
            std::cout << "Shortest Span == " << s1.shortestSpan() << std::endl;
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}