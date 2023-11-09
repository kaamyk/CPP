#include "../includes/ScalarConverter.hpp"

int	main( void )
{
	ScalarConverter	sc("45678256743280562347805467");
	ScalarConverter	sc1("45f");
	ScalarConverter	sc2("45.45f");
	ScalarConverter	sc3("1");
	ScalarConverter	sc4("c");
	ScalarConverter	sc5("123");
	ScalarConverter	sc6("2.0");

	std::cout << "Before conversion: " << sc << std::endl;
	std::cout << "Before conversion: " << sc1 << std::endl;

	std::cout << "Convert First Converter: Must throw out of range." << std::endl;
	sc.convert();
	std::cout << std::endl;

	std::cout << "Convert Second Converter: Must be OK but type == INVALID (4)." << std::endl;
	sc1.convert();
	std::cout << std::endl;

	std::cout << "Convert Third Converter: Must be OK." << std::endl;
	sc2.convert();
	std::cout << std::endl;

	std::cout << "Convert Fourth Converter: Must throw out of range." << std::endl;
	sc3.convert();
	std::cout << std::endl;

	std::cout << "Convert fifth Converter: Must be OK but type == INVALID (4)." << std::endl;
	sc4.convert();
	std::cout << std::endl;
	
	std::cout << "Convert Sixth Converter: Must be OK." << std::endl;
	sc5.convert();
	std::cout << std::endl;

	std::cout << "Convert Seventh Converter: Must be OK." << std::endl;
	sc6.convert();
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "After conversion: " << sc << std::endl;
	std::cout << "After conversion: " << sc1 << std::endl;
	std::cout << "After conversion: " << sc2 << std::endl;
	return (0);
}