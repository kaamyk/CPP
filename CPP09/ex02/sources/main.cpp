#include "../includes/PmergeMe.hpp"

template<typename T>
void    fillContainerWithRandomNum( T& list ){
    srand(time(NULL));
    for (unsigned int i = 0; i < 100; ++i){
        list.push_back(rand() % 1000);
    }
}

bool    is_num( char c ){
    return (c >= '0' && c <= '9');
}

template<typename T>
void    printContainer( T const& beg, T const& end ){
    T tmp = beg;
    unsigned int i = 0;

    for (; i < 10 && tmp != end; i++){
        std::cout << " " << *tmp;
        tmp++;
    }
    if (i == 10 && tmp != end){
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
                // std::cerr << ">>> Wrong Char => argv[" << i << "][" << io << "] == " << argv[i][io] << std::endl;
                return (1);
            }
        }
        list.push_back( stoi(std::string(argv[i])) );
    }
    return (0);
}


template<typename T>
bool    fordJohnsonAlgo( T const& itBegin, T const& itEnd ){
    if (std::distance(itBegin, itEnd) > 3){
        T itMid = itBegin;
        for (unsigned int i = 0; i < std::distance(itBegin, itEnd) / 2; i++){
            itMid++;
        }
        if (fordJohnsonAlgo(itBegin, itMid))
            return (1);
        ++itMid;
        if (fordJohnsonAlgo(itMid, itEnd))
            return (1);
    }
    try{
        std::sort(itBegin, itEnd);
    }
    catch(std::exception& e){
        std::cout << "std::sort exception: " << e.what() << std::endl;
        return (1);
    }
    return (0);
}

//          *** LIST ***

bool    fordJohnsonAlgo( std::list<unsigned int>& l ){
    if (l.size() > 3){
        std::list<unsigned int>::iterator itMid = l.begin();
        for (unsigned int i = 0; i < l.size() / 2; i++){
            itMid++;
        }
        std::list<unsigned int> tmpList1 = std::list<unsigned int>(l.begin(), itMid);
        if (fordJohnsonAlgo(tmpList1))
            return (1);
        std::list<unsigned int> tmpList2 = std::list<unsigned int>(itMid, l.end());
        if (fordJohnsonAlgo(tmpList2))
            return (1);
        tmpList1.merge(tmpList2);
        l = tmpList1;
    }
    else{
        try{
        l.sort();
        }
        catch(std::exception& e){
            std::cout << "std::sort exception: " << e.what() << std::endl;
            return (1);
        }
    }
    return (0);
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
    std::vector<unsigned int>   autoV;
    if (argc <= 1){
        std::cout << "Information: No/Not enough arguments were provided.\n>> An automatically filled random list will be generated." << std::endl << std::endl;
        fillContainerWithRandomNum(autoV);
    }
    {
        std::vector<unsigned int>    list;
        if (argc <= 1){
            list = std::vector<unsigned int>(autoV.begin(), autoV.end());
        }
        else{
            if (parseArguments(argv + 1, list)){
                std::cerr << "Error: Inputs Invalid." << std::endl;
                return (1);
            }
        }
        std::cout << "Begin: ";
        printContainer(list.begin(), list.end());
        std::cout << std::endl;
        clock_t  t = clock();
        if (fordJohnsonAlgo(list.begin(), list.end()))
            std::cout << "Error: Sorting Failed." << std::endl;
        t = clock() - t;
        // std::cout << std::endl;
        std::cout << "End: ";
        printContainer(list.begin(), list.end());
        std::cout << std::endl;
        // std::cout << std::endl;
        std::cout << "Sorting Time for a std::vector of " << list.size() << " elements : " << (float)(((float)(t) / CLOCKS_PER_SEC) * 1000)  << " ms. ";
        std::cout << "( Sorted == " << is_sorted(list.begin(), list.end()) << " )" << std::endl;
    }
    std::cout << std::endl;
    {
        std::deque<unsigned int>    list;
        if (argc <= 1){
            list = std::deque<unsigned int>(autoV.begin(), autoV.end());
        }
        else{
            if (parseArguments(argv + 1, list)){
                std::cerr << "Error: Inputs Invalid." << std::endl;
                return (1);
            }
        }
        clock_t  t = clock();
        if (fordJohnsonAlgo(list.begin(), list.end()))
            std::cout << "Error: Sorting Failed." << std::endl;
        t = clock() - t;
        std::cout << "Sorting Time for std:deque of " << list.size() << " elements : " << (float)(((float)(t) / CLOCKS_PER_SEC) * 1000) << " ms. ";
        std::cout << "( Sorted == " << is_sorted(list.begin(), list.end()) << " )" << std::endl;
    }
    std::cout << std::endl;
    {
        std::list<unsigned int>    list;
        if (argc <= 1){
            list = std::list<unsigned int>(autoV.begin(), autoV.end());
        }
        else{
            if (parseArguments(argv + 1, list)){
                std::cerr << "Error: Inputs Invalid." << std::endl;
                return (1);
            }
        }
        clock_t  t = clock();
        if (fordJohnsonAlgo(list))
            std::cout << "Error: Sorting Failed." << std::endl;
        t = clock() - t;
        std::cout << "Sorting Time for a std::list of " << list.size() << " elements : " << (float)(((float)(t) / CLOCKS_PER_SEC) * 1000)  << " ms. ";
        std::cout << "( Sorted == " << is_sorted(list.begin(), list.end()) << " )" << std::endl;
    }
    return (0);
}