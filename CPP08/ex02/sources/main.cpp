#include <iostream>
#include <vector>

int main( void )
{
    std::vector<char>    s;
    std::vector<char>::iterator    it = s.begin();

    try{
        std::cout << "*it == " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}