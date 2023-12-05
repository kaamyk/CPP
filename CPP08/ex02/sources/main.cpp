#include "../includes/MutantStack.hpp"
#include <list>

int main( void )
{
    {
        MutantStack<int> mstack;
        std::cout << "MutantStack is empty: " << mstack.empty() << std::endl;
        mstack.push(5);
        std::cout << "Adding one element ..." << std::endl;
        std::cout << "MutantStack is empty: " << mstack.empty() << std::endl;

        mstack.push(17);
        std::cout << "size: " << mstack.size() << std::endl;
        std::cout << "top: " << mstack.top() << std::endl;

        mstack.pop();
        std::cout << "Poping one element ..." << std::endl;
        std::cout << "size: " << mstack.size() << std::endl;
        std::cout << "top: " << mstack.top() << std::endl;

        std::cout << "Adding four elements ..." << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        std::cout << "size: " << mstack.size() << std::endl;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite){
            std::cout << *it << std::endl;
            ++it;
        }
    }
    std::cout << std::endl;
    {
        std::list<int> mstack;
        std::cout << "std::list is empty: " << mstack.empty() << std::endl;
        mstack.push_back(5);
        std::cout << "Adding one element ..." << std::endl;
        std::cout << "std::list is empty: " << mstack.empty() << std::endl;

        mstack.push_back(17);
        std::cout << "size: " << mstack.size() << std::endl;
        std::cout << "top: " << mstack.front() << std::endl;

        mstack.erase(++mstack.begin());
        std::cout << "Poping one element ..." << std::endl;
        std::cout << "size: " << mstack.size() << std::endl;
        std::cout << "top: " << mstack.front() << std::endl;

        std::cout << "Adding four elements ..." << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        std::cout << "size: " << mstack.size() << std::endl;
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite){
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return (0);
}