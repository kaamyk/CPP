#include "../includes/PmergeMe.hpp"

void    fillVectorWithRandomNum( std::vector<unsigned int>& list ){
    srand(time(NULL));
    for (unsigned int i = 0; i < 10; ++i){
        list.push_back(rand() % 10);
    }
}

bool    is_num( char c ){
    return (c >= '0' && c <= '9');
}

void    printVector( std::vector<unsigned int>::iterator const& beg, std::vector<unsigned int>::iterator const& end ){
    std::vector<unsigned int>::iterator tmp = beg;

    while (tmp != end){
        std::cout << " " << *tmp;
        tmp++;
    }
}

unsigned int     stoi( std::string s ){
    std::stringstream   ss;
    int res;

    ss << s;
    ss >> res;
    return (res);
}

bool    parseArguments( char** argv, std::vector<unsigned int>& list ){
    std::stringstream   ss;

    
    for (size_t i = 0; argv[i] != NULL; i++){
        for (size_t io = 0; argv[i][io] != 0; io++){
            if (is_num(argv[i][io]) == 0){
                std::cout << ">>> Wrong Char => argv[" << i << "][" << io << "] == " << argv[i][io] << std::endl;
                return (1);
            }
        }
        list.push_back( stoi(std::string(argv[i])) );
    }
    return (0);
}

void    fordJohnsonAlgo( std::vector<unsigned int>::iterator const& itBegin, std::vector<unsigned int>::iterator const& itEnd ){
    if (std::distance(itBegin, itEnd) > 3){
        std::vector<unsigned int>::iterator itMid = itBegin;
        for (unsigned int i = 0; i < std::distance(itBegin, itEnd) / 2; i++){
            itMid++;
        }
        fordJohnsonAlgo(itBegin, itMid);
        ++itMid;
        fordJohnsonAlgo(itMid, itEnd);
    }
    std::sort(itBegin, itEnd);
    // std::cout << "SubList:";
    // for(std::vector<unsigned int>::iterator itTmp = itBegin; itTmp != itEnd; itTmp++){
    //     std::cout << " " << *itTmp;
    // }
    // std::cout << std::endl;
}

int main( int argc, char **argv ){
    std::vector<unsigned int>    list;
    if (argc <= 1){
        // Create an arbitrary vector
        std::cout << "Information: No Arguments provided.\n>> The list treated will be automatically filled with random values." << std::endl;
        fillVectorWithRandomNum(list);
    }
    else{
        // Copy the numbers passed in arg to a vector
        if (parseArguments(argv + 1, list)){
            std::cerr << "Error: Inputs Invalid." << std::endl;
            return (1);
        }
    }
    std::cout << "Begin: ";
    printVector(list.begin(), list.end());
    std::cout << std::endl;
    fordJohnsonAlgo(list.begin(), list.end());
    std::cout << std::endl;
    std::cout << "End: ";
    printVector(list.begin(), list.end());
    std::cout << std::endl;
    return (0);
}