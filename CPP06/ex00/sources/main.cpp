#include "../includes/ScalarConverter.hpp"

// int	main( void )
// {
// 	ScalarConverter	sc("45678256743280562347805467");
// 	ScalarConverter	sc1("45f");
// 	ScalarConverter	sc2("45.45f");
// 	ScalarConverter	sc3("1");
// 	ScalarConverter	sc4("c");
// 	ScalarConverter	sc5("123");
// 	ScalarConverter	sc6("2.0");
// 	ScalarConverter	sc7("2.0f");

// 	std::cout << "Before conversion: " << sc << std::endl;
// 	std::cout << "Before conversion: " << sc1 << std::endl;

// 	std::cout << "Convert sc Converter: Must throw out of range." << std::endl;
// 	sc.convert();
// 	std::cout << std::endl;

// 	std::cout << "Convert sc1 Converter: Must be OK but type == INVALID (4)." << std::endl;
// 	sc1.convert();
// 	std::cout << std::endl;

// 	std::cout << "Convert sc2 Converter: Must be OK." << std::endl;
// 	sc2.convert();
// 	std::cout << std::endl;

// 	std::cout << "Convert sc3 Converter: Must be OK." << std::endl;
// 	sc3.convert();
// 	std::cout << std::endl;

// 	std::cout << "Convert sc4 Converter: Must be OK." << std::endl;
// 	sc4.convert();
// 	std::cout << std::endl;
	
// 	std::cout << "Convert sc5 Converter: Must be OK." << std::endl;
// 	sc5.convert();
// 	std::cout << std::endl;

// 	std::cout << "Convert sc6 Converter: Must be OK." << std::endl;
// 	sc6.convert();
// 	std::cout << std::endl;

// 	std::cout << "Convert sc7 Converter: Must be OK." << std::endl;
// 	sc7.convert();
// 	std::cout << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "After conversion: " << sc << std::endl;
// 	std::cout << "After conversion: " << sc1 << std::endl;
// 	std::cout << "After conversion: " << sc2 << std::endl;
// 	std::cout << "After conversion: " << sc3 << std::endl;
// 	std::cout << "After conversion: " << sc4 << std::endl;
// 	std::cout << "After conversion: " << sc5 << std::endl;
// 	std::cout << "After conversion: " << sc6 << std::endl;
// 	std::cout << "After conversion: " << sc7 << std::endl;
// 	return (0);
// }

int	main( int argc, char **argv )
{
	if (argc < 2){
		std::cout << "The program needs at leat on argument" << std::endl;
		return (0);
	}
	else if (argc > 2)
		std::cout << "Too much argument: only the first will be used" << std::endl;
	ScalarConverter	converter(argv[1]);
	converter.convert();
	std::cout << "After conversion: " << converter << std::endl;
	return (0);
}