#include <iostream>
#include <list>
#include <ctime>

// int main( void ){
//     srand(time(NULL));
//     std::list<unsigned int> l;
//     std::list<unsigned int> l1;

//     for (unsigned int i = 0; i < 10; ++i){
//         l.push_back(rand()%10);
//     }
//     for (unsigned int i = 0; i < 4; ++i){
//         l1.push_back(rand()%10);
//     }
//     std::cout << "Begin list:";
//     for (std::list<unsigned int>::iterator it = l.begin(); it != l.end(); ++it){
//         std::cout << " " << *it;
//     }
//     std::cout << "Begin list1:";
//     for (std::list<unsigned int>::iterator it = l1.begin(); it != l1.end(); ++it){
//         std::cout << " " << *it;
//     }
//     std::cout << std::endl;
//     l.sort();
//     std::cout << "Sorted list:";
//     for (std::list<unsigned int>::iterator it = l.begin(); it != l.end(); ++it){
//         std::cout << " " << *it;
//     }
//     std::cout << std::endl;
//     l1.sort();
//     std::cout << "Sorted list1:";
//     for (std::list<unsigned int>::iterator it = l1.begin(); it != l1.end(); ++it){
//         std::cout << " " << *it;
//     }
//     std::cout << std::endl;
//     l.merge(l1);
//     std::cout << "End list:";
//     for (std::list<unsigned int>::iterator it = l.begin(); it != l.end(); ++it){
//         std::cout << " " << *it;
//     }
//     return (0);
// }

int main( void ){
    srand(time(NULL));
    std::list<unsigned int> bigl;
    for (unsigned int i = 0; i < 10; ++i){
        bigl.push_back(rand()%10);
    }
    std::list<unsigned int>::iterator itMid = bigl.begin();
    std::cout << "i:";
    for (unsigned int i = 0; i < bigl.size() / 2; ++i){
        ++itMid;
        std::cout << " " << i; 
    }
    std::cout << std::endl;
    std::list<unsigned int> halfl(bigl.begin(), itMid);
    ++itMid;
    std::list<unsigned int> halfl1(itMid, bigl.end());
    std::cout << "Big list:";
    for (std::list<unsigned int>::iterator it = bigl.begin(); it != bigl.end(); ++it){
        std::cout << " " << *it;
    }
    std::cout << std::endl;
std::cout << "Begin halfl:";
    for (std::list<unsigned int>::iterator it = halfl.begin(); it != halfl.end(); ++it){
        std::cout << " " << *it;
    }
    std::cout << std::endl;
std::cout << "Begin halfl1:";
    for (std::list<unsigned int>::iterator it = halfl1.begin(); it != halfl1.end(); ++it){
        std::cout << " " << *it;
    }
    std::cout << std::endl;
    return (0);
}