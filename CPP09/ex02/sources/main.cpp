#include "../includes/PmergeMe.hpp"

template<typename T>
void    fillContainerWithRandomNum( T& list ){
    srand(time(NULL));
    for (unsigned int i = 0; i < 10; ++i){
        list.push_back(rand() % 10);
    }
}

bool    is_num( char c ){
    return (c >= '0' && c <= '9');
}

template<typename T>
void    printContainer( T const& beg, T const& end ){
    T tmp = beg;
    unsigned int i = 0;

    for (; i < 5 && tmp != end; i++){
        std::cout << " " << *tmp;
        tmp++;
    }
    if (i == 5 && tmp != end){
        std::cout << "[...]";
    }
}

unsigned int     stoi( std::string s ){
    std::stringstream   ss;
    int res;

    ss << s;
    ss >> res;
    return (res);
}

template<typename T>
bool    parseArguments( char** argv, T& list ){
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


template<typename T>
void    fordJohnsonAlgo( T const& itBegin, T const& itEnd ){
    if (std::distance(itBegin, itEnd) > 3){
        T itMid = itBegin;
        for (unsigned int i = 0; i < std::distance(itBegin, itEnd) / 2; i++){
            itMid++;
        }
        fordJohnsonAlgo(itBegin, itMid);
        ++itMid;
        fordJohnsonAlgo(itMid, itEnd);
    }
    std::sort(itBegin, itEnd);
}

//          *** LIST ***

void    fordJohnsonAlgo( std::list<unsigned int>& l ){
    if (l.size() > 3){
        std::list<unsigned int>::iterator itMid = l.begin();
        for (unsigned int i = 0; i < l.size() / 2; i++){
            itMid++;
        }
        std::list<unsigned int> tmpList1 = std::list<unsigned int>(l.begin(), itMid);
        fordJohnsonAlgo(tmpList1);
        ++itMid;
        std::list<unsigned int> tmpList2 = std::list<unsigned int>(itMid, l.end());
        fordJohnsonAlgo(tmpList2);
        tmpList1.merge(tmpList2);
    }
    l.sort();
}

template<typename T>
bool    is_sorted( const T& itBegin, const T& itEnd ){
    T itNext = itBegin;
    T itPrev = itBegin;

    itNext++;
    for(; itNext != itEnd; ++itNext){
        if (*itNext < *itPrev){
            return (0);
        }
        ++itPrev;
    }
    return (1);
}

int main( int argc, char **argv ){
    {
        std::cout << "Sorting std::vector" << std::endl;
        std::vector<unsigned int>    list;
        if (argc <= 1){
            // Create an arbitrary vector
            std::cout << "Information: No Arguments provided.\n>> The list treated will be automatically filled with random values." << std::endl;
            fillContainerWithRandomNum(list);
        }
        else{
            // Copy the numbers passed in arg to a vector
            if (parseArguments(argv + 1, list)){
                std::cerr << "Error: Inputs Invalid." << std::endl;
                return (1);
            }
        }
        std::cout << "Begin: ";
        printContainer(list.begin(), list.end());
        std::cout << std::endl;
        clock_t  t = clock();
        fordJohnsonAlgo(list.begin(), list.end());
        t = clock() - t;
        // std::cout << std::endl;
        std::cout << "End: ";
        printContainer(list.begin(), list.end());
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Sorting Time for " << list.size() << " elements : " << (float)((float)(t) / CLOCKS_PER_SEC) << " secs." << std::endl;
        std::cout << "Sorting of the list: " << is_sorted(list.begin(), list.end()) << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {
        std::cout << "Sorting std::deque" << std::endl;
        std::deque<unsigned int>    list;
        if (argc <= 1){
            // Create an arbitrary list
            std::cout << "Information: No Arguments provided.\n>> The list treated will be automatically filled with random values." << std::endl;
            fillContainerWithRandomNum(list);
        }
        else{
            // Copy the numbers passed in arg to a list
            if (parseArguments(argv + 1, list)){
                std::cerr << "Error: Inputs Invalid." << std::endl;
                return (1);
            }
        }
        std::cout << "Begin: ";
        printContainer(list.begin(), list.end());
        std::cout << std::endl;
        clock_t  t = clock();
        fordJohnsonAlgo(list.begin(), list.end());
        t = clock() - t;
        std::cout << "End: ";
        printContainer(list.begin(), list.end());
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Sorting Time for " << list.size() << " elements : " << (float)((float)(t) / CLOCKS_PER_SEC) << " secs." << std::endl;
        std::cout << "Sorting of the list: " << is_sorted(list.begin(), list.end()) << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {
        std::cout << "Sorting std::list" << std::endl;
        std::list<unsigned int>    list;
        if (argc <= 1){
            // Create an arbitrary list
            std::cout << "Information: No Arguments provided.\n>> The list treated will be automatically filled with random values." << std::endl;
            fillContainerWithRandomNum(list);
        }
        else{
            // Copy the numbers passed in arg to a list
            if (parseArguments(argv + 1, list)){
                std::cerr << "Error: Inputs Invalid." << std::endl;
                return (1);
            }
        }
        std::cout << "Begin: ";
        printContainer(list.begin(), list.end());
        std::cout << std::endl;
        clock_t  t = clock();
        fordJohnsonAlgo(list);
        t = clock() - t;
        std::cout << std::endl;
        std::cout << "End: ";
        printContainer(list.begin(), list.end());
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Sorting Time for " << list.size() << " elements : " << (float)((float)(t) / CLOCKS_PER_SEC) << " secs." << std::endl;
        std::cout << "Sorting of the list: " << is_sorted(list.begin(), list.end()) << std::endl;
    }
    return (0);
}