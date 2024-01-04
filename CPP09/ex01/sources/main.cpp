#include "../includes/RPN.hpp"

bool    is_operator( char c ){
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool    is_digit( char c ){
    return (c >= '0' && c <= '9');
}

int     stoi( std::string& s ){
    std::stringstream   ss;
    int res;

    ss << s;
    ss >> res;
    return (res);
}

std::string    itos( int n ){
    std::ostringstream  os;
    std::string res;

    os << n;
    res = os.str();
    return (res);
}

bool    calculate( std::stack<std::string>& members, char op){
    if (members.size() < 2){
        std::cerr << ">> Too much operator" << std::endl;
        return (1);
    }
    int n1 = stoi(members.top());
    members.pop();
    int n2 = stoi(members.top());
    members.pop();
    int res = 0;

    // std::cout << "n1 == " << n1 << " && n2 == " << n2 << std::endl;
    
    switch(op){
        case '+':
            res = n2 + n1;
            break ;
        case '-':
            res = n2 - n1;
            break ;
        case '*':
            res = n2 * n1;
            break ;
        case '/':
            res = n2 / n1;
            break ;
        default:
            std::cerr << ">> Operator unvalid." << std::endl;
            return (1);
    }
    std::string ntop = itos(res);

    // std::cout << "ntop == " << ntop << std::endl;

    members.push(ntop); 
    return (0);
}

void    calculateRNP( char* argv ){
    std::stack<std::string> members;

    if (argv == NULL){
        throw (WrongFormat());
        return ;
    }
    while (*argv != 0){
        if (is_digit(*argv)){
            members.push(std::string(argv));
        }
        else if (is_operator(*argv)){
            if (calculate(members, *argv)){
                throw (WrongFormat());
            }
        }
        else if (*argv != ' '){
            std::cerr << ">> One of the members is neither a digit nor an operator." << std::endl;
            throw (WrongFormat());
        }
        argv++;
    }
    if (members.size() != 1){
        std::cerr << ">> At the end of compute, stack.size() != 1. (stack.size() == " << members.size() << ")" << std::endl;
        throw (WrongFormat());
    }
    std::cout << "Result: " << members.top() << std::endl;
}

int main( int argc, char** argv ){
    if (argc != 2){
        std::cerr << ">> The program takes an RPN expression with at least two numbers and a operator in this order. <<" << std::endl;
        return (1);
    }
    std::cout << "Expression: " << argv[1] << std::endl;
    try{
        calculateRNP(argv[1]);
    }
    catch( std::exception& e){
        std::cerr << e.what() << std::endl;
        return (1);
    }
    return (0);
}