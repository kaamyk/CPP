#include "../includes/ScalarConverter.hpp"

int	main( int argc, char **argv )
{
	if (argc < 2){
		std::cout << "The program needs at least on argument" << std::endl;
		return (0);
	}
	else if (argc > 2)
		std::cout << ">> Too much argument: only the first will be considered << " << std::endl << std::endl;
	ScalarConverter::convert(argv[1]);
	// std::cout << "After conversion: " << converter << std::endl;
	return (0);
}