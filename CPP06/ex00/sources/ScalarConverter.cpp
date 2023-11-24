#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	return ;
}

ScalarConverter::ScalarConverter( std::string const& source )
{
	(void) source;
	return;
}

ScalarConverter::ScalarConverter( ScalarConverter const& source )
{
	*this = source;
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	return ;
}

ScalarConverter&	ScalarConverter::operator=( ScalarConverter const& source )
{
	( void ) source;
	return (*this);
}

const char*	paramOutOfRange::what() const throw()
{
	return ("Error: Parameter out of range.");
}

const char*	conversionException::what() const throw()
{
	return ("Error: string conversion failed.");
}

static int	detectNonNum( std::string source )
{
	if (source == "inf" || source == "+inf" || source == "inff" || source == "+inff"
	|| source == "-inf" || source == "-inff" || source == "nan" || source == "nanf")
	{
		std::cout << "Actual Type == Pseudo Literal" << std::endl
		<< "to Char == impossible" << std::endl;
		if (source == "inf" || source == "+inf" || source == "inff" || source == "+inff"){
			std::cout << "to Int == " << std::numeric_limits<int>::infinity() << std::endl
			<< "to Float == " << std::numeric_limits<float>::infinity() << "f" << std::endl
			<< "to Double == " << std::numeric_limits<double>::infinity() << std::endl;
		}
		else if (source == "-inf" || source == "-inff"){
			std::cout << "to Int == " << std::numeric_limits<int>::infinity() << std::endl
			<< "to Float == -" << std::numeric_limits<float>::infinity() << "f" << std::endl
			<< "to Double == -" << std::numeric_limits<double>::infinity() << std::endl;
		}
		else if (source == "nan" || source == "nanf"){
			std::cout << "to Int == impossible" << std::endl
			<< "to Float == " << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl
			<< "to Double == " << std::numeric_limits<double>::quiet_NaN() << std::endl;
		}
		return (NON_NUM);
	}
	return (INVALID);
}

static int detectType( std::string source )
{
    if (detectNonNum(source) == NON_NUM)
        return (NON_NUM);
    if (source.size() == 1){
        if (isalpha(source[0]))
            return (CHAR);
        else if (isdigit(source[0]))
            return (INT);
        else
            return (INVALID);
    }

    if (source.find_first_of(".") != source.find_last_of(".")
		|| source.find_first_of("-") != source.find_last_of("-"))
        	return (INVALID);
    size_t rank = source.find_first_of(".");
	if (rank != std::string::npos)
	{
		if (rank == 0 || rank == source.size() - 1)
			return (INVALID);
		else if (rank != source.size() - 1 && source.find_first_not_of("1234567890.-") == source.find_last_not_of("1234567890.-")){
			rank = source.find_last_not_of("1234567890.-");
			if (rank != std::string::npos && rank == source.size() - 1 && source[rank] == 'f')
				return (FLOAT);
			else
				return (DOUBLE);
		}
    }
	rank = source.find_first_of("-");
	if (rank != std::string::npos)
		return (rank != 0 ? INVALID : INT);
	else if (source.find_first_not_of("1234567890") == std::string::npos)
		return (INT);
    return (INVALID);
}

static void	convertFromChar( std::string source )
{
	// _int = static_cast<int>(_char);
	// _float = static_cast<float>(_char);
	// _double = static_cast<double>(_char);
	char	toChar = source[0];

	std::cout << "Actual Type: CHAR" << std::endl;
	std::cout << "to Char == ";
	std::cout << (std::isprint(source[0]) ? &toChar : "Non printable") << std::endl;

    std::cout << "to Int = " << static_cast<int>(toChar) << std::endl;

	std::cout << "to Float = ";
	if(static_cast<float>(toChar) == static_cast<int>(toChar))
		std::cout << std::fixed << std::setprecision(1);
	std::cout << static_cast<float>(toChar) << "f" << std::endl;

	std::cout << "to Double = ";
	if (static_cast<int>(toChar) == static_cast<int>(static_cast<int>(toChar)))
		std::cout  << std::fixed << std::setprecision(1);
	std::cout << static_cast<double>(toChar) << std::endl;
}

static void	convertToInt( std::string source, int& toInt )
{
	char*	endptr;
	long	tmp = std::strtol(&source[0], &endptr, 10);

	if (*endptr != 0)
		return (throw conversionException());
	else if (tmp < INT_MIN || tmp > INT_MAX)
		return (throw paramOutOfRange());

	toInt = atoi(source.c_str());
	return ;
}

static void	convertFromInt( std::string source )
{
	// _char = static_cast<char>(_int);
	// _float = static_cast<float>(_int);
	// _double = static_cast<double>(_int);
    int toInt = 0;
    try{
        convertToInt(source, toInt);
    }
    catch(std::exception& e){
        std::cout << "Conversion error: " << e.what() << std::endl;
        return ;
    }
	std::cout << "Actual Type: INT" << std::endl;
	std::cout << "to Char = ";
	if (std::isprint(static_cast<char>(toInt)))
    	std::cout << static_cast<char>(toInt) << std::endl;
	else
		std::cout << "Non Displayable" << std::endl;

	std::cout << "to Int == " << toInt << std::endl;

	std::cout << "to Float = ";
	if(static_cast<float>(toInt) == static_cast<int>(toInt))
		std::cout << std::fixed << std::setprecision(1);
	std::cout << static_cast<float>(toInt) << "f" << std::endl;

	std::cout << "to Double = ";
	if (static_cast<int>(toInt) == static_cast<int>(static_cast<int>(toInt)))
		std::cout  << std::fixed << std::setprecision(1);
	std::cout << static_cast<double>(toInt) << std::endl;
}

static void	convertToFloat( std::string source, float& toFloat )
{
	char*	endptr;
	double	tmp = std::strtod(source.c_str(), &endptr);

	if (*endptr != 'f')
		return (throw conversionException());
	if (tmp < -std::numeric_limits<float>::max() || tmp > std::numeric_limits<float>::max())
		return (throw paramOutOfRange());
	toFloat = static_cast<float>(tmp);
	return ;
}

static void	convertFromFloat( std::string source )
{
	// _char = static_cast<char>(round(_float));
	// _int = static_cast<int>(round(_float));
	// _double = static_cast<double>(_float);
	float	toFloat = 0.0f;

	try{
		convertToFloat(source, toFloat);
	}
	catch(std::exception& e){
		std::cout << "Convertion error: " << e.what() << std::endl;
		return ;
	}
	std::cout << "Actual Type: FLOAT" << std::endl;
	std::cout << "to Char = ";
	if (std::isprint(static_cast<char>(toFloat)))
    	std::cout << static_cast<char>(toFloat) << std::endl;
	else
		std::cout << "Non Displayable" << std::endl;

	std::cout << "to Int = ";
	if(static_cast<int>(round(toFloat)) == static_cast<long>(round(toFloat)))
		std::cout << static_cast<int>(round(toFloat)) << std::endl;
	else
		std::cout << "Over/Underflow" << std::endl;

	std::cout << "to Float = ";
	if(static_cast<float>(toFloat) == static_cast<int>(toFloat))
		std::cout << std::fixed << std::setprecision(1);
	std::cout << static_cast<float>(toFloat) << "f" << std::endl;

	std::cout << "to Double = ";
	if (static_cast<int>(toFloat) == static_cast<int>(static_cast<int>(toFloat)))
		std::cout  << std::fixed << std::setprecision(1);
	std::cout << static_cast<double>(toFloat) << std::endl;
}

static void	convertToDouble( std::string source, double& toDouble )
{
	char*		endptr;
	long double	tmp = std::strtold(source.c_str(), &endptr);

	if (*endptr != 0)
		return (throw conversionException());
	if (tmp < -std::numeric_limits<double>::max() || tmp > std::numeric_limits<double>::max())
		return (throw paramOutOfRange());
	toDouble = static_cast<double>(tmp);
	return ;
}

static void	convertFromDouble( std::string source )
{
	// _char = static_cast<char>(round(_double));
	// _int = static_cast<int>(round(_double));
	// _float = static_cast<float>(_double);
	double	toDouble = 0.0;

	try{
		convertToDouble(source, toDouble);
	}
	catch(std::exception& e){
		std::cout << "Convertion error: " << e.what() << std::endl;
		return ;
	}
	std::cout << "Actual Type: DOUBLE" << std::endl;
	std::cout << "to Char = ";
	if (std::isprint(static_cast<char>(toDouble)))
    	std::cout << static_cast<char>(toDouble) << std::endl;
	else
		std::cout << "Non Displayable" << std::endl;

	std::cout << "to Int = ";
	if(static_cast<int>(round(toDouble)) == static_cast<long>(round(toDouble)))
		std::cout << static_cast<int>(round(toDouble)) << std::endl;
	else
		std::cout << "Over/Underflow" << std::endl;
		
	std::cout << "to Float = ";
	if(static_cast<float>(toDouble) == static_cast<int>(toDouble))
		std::cout << std::fixed << std::setprecision(1);
	std::cout << static_cast<float>(toDouble) << "f" << std::endl;

	std::cout << "to Double == " << toDouble << std::endl;
}

void	ScalarConverter::convert( std::string source )
{
	// detectType(source);
	// convertToActualType(source);
	// std::cout << "DetecType() ==" << detectType(source) << std::endl;
	std::cout << "Source == '" << source << "'" << std::endl;
	switch(detectType(source)){
	case CHAR:
		convertFromChar(source);
		break ;
	case INT:
		convertFromInt(source);
		break ;
	case FLOAT:
		convertFromFloat(source);
		break ;
	case DOUBLE:
		convertFromDouble(source);
		break ;
	case NON_NUM:
		break ;
	case INVALID:
		std::cout << "Error: Input invalid." << std::endl;
		break ;
	}
	return ;
}