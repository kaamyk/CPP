#include "../includes/MutantStack.hpp"

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
    return (0);
}