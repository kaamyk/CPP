#include <iostream>

int main( void )
{
    std::string s1 = "2000";
    std::string s2 = "10";

    std::cout << s1.compare(s2) << std::endl;
    std::cout << s2.compare(s1) << std::endl;
    return (0);
}