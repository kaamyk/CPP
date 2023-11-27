#include "../includes/easyfind.hpp"
#include <ctime>
#include <cstdlib>

int main( void )
{
    {
        std::vector<int>    v(4, 0);
        for (unsigned int i = 0; i < 4; ++i){
            v[i] = rand() % 100;
            std::cout << "v[" << i << "] == " << v[i] << std::endl;
        }
        int n = 56;
        int n2 = v[2];
        try{
            std::cout << "easyFind => " << *easyfind(v, n) << std::endl;
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
        try{
            std::cout << "easyFind => " << *easyfind(v, n2) << std::endl;
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
        return (0);
    }
}