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
        std::cout << std::endl;
    }
    {
        std::list<int>    l(4, 0);
        std::list<int>::iterator it = l.begin();
        for (unsigned int i = 0; i < 4; ++i){
            *it = rand() % 100;
            std::cout << "l[" << i << "] == " << *it << std::endl;
            ++it;
        }
        int n = 56;
        it = l.begin();
        std::advance(it, 2);
        int n2 = *it;
        try{
            std::cout << "easyFind => " << *easyfind(l, n) << std::endl;
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
        try{
            std::cout << "easyFind => " << *easyfind(l, n2) << std::endl;
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    {
        int array[4] = {8, 6, 8,7};
        std::set<int>    s(array, array + 4);
        std::set<int>::iterator it = s.begin();
        for (unsigned int i = 0; i < 4; ++i){
            std::cout << "s[" << i << "] == " << *it << std::endl;
            ++it;
        }
        int n = 56;
        it = s.begin();
        std::advance(it, 2);
        int n2 = *it;
        try{
            std::cout << "easyFind => " << *easyfind(s, n) << std::endl;
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
        try{
            std::cout << "easyFind => " << *easyfind(s, n2) << std::endl;
        }
        catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    return (0);
}