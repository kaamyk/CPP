#include "../includes/ScalarConverter.hpp"

int	main( void )
{
	ScalarConverter	sc("45678256743280562347805467");
	ScalarConverter	sc1("45");

	std::cout << "Before conversion: " << sc << std::endl;
	std::cout << "Before conversion: " << sc1 << std::endl;

	std::cout << "Convert First Converter: Must throw out of range." << std::endl;
	sc.convert();
	std::cout << std::endl;
	std::cout << "Convert Second Converter: Must be OK." << std::endl;
	sc1.convert();
	std::cout << std::endl;
	std::cout << "After conversion: " << sc << std::endl;
	std::cout << "After conversion: " << sc1 << std::endl;
	return (0);
}