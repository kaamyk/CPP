#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ): 	_source(""), _char(0), _int(0),
											_float(0), _double(0)
{
	return ;
}

ScalarConverter::ScalarConverter( std::string const& source):	_source(source), _char(0), _int(0),
																_float(0), _double(0)
{
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
	_source = source._source;
	_char = source._char;
	_int = source._int;
	_float = source._float;
	_double = source._double;
	return (*this);
}

const char*	ScalarConverter::paramOutOfRange::what() const throw()
{
	return ("Error: Parameter out of range.");
}

const char*	ScalarConverter::conversionException::what() const throw()
{
	return ("Error: string conversion failed.");
}

std::string	ScalarConverter::getSource( void ) const
{
	return (_source);
}

int			ScalarConverter::getInt( void ) const
{
	return (_int);
}

float		ScalarConverter::getFloat( void ) const
{
	return (_float);
}

double		ScalarConverter::getDouble( void ) const
{
	return (_double);
}

void	ScalarConverter::convertInt( void )
{
	char*	endptr;
	long	tmp = std::strtol(&_source[0], &endptr, 10);

	std::cout << "convInt => tmp == " << tmp << std::endl;

	if (*endptr != 0)
		return (throw ScalarConverter::conversionException());
	else if (tmp < INT_MIN || tmp > INT_MAX)
		return (throw ScalarConverter::paramOutOfRange());

	_int = atoi(_source.c_str());
	std::cout << "convInt => _int == " << _int << std::endl;
	return ;
}

void	ScalarConverter::convertFloat( void )
{
	char*	endptr;
	double	tmp = std::strtod(&_source[0], &endptr);

	std::cout << "convFloat => tmp == " << tmp << std::endl;

	if (*endptr != 0)
		return (throw ScalarConverter::conversionException());
	else if (tmp < FLT_MIN || tmp > FLT_MAX)
		return (throw ScalarConverter::paramOutOfRange());

	_float = std::strtof(&_source[0], &endptr);
	std::cout << "convFloat => _float == " << _float << std::endl;
	return ;
}

void	ScalarConverter::convertDouble( void )
{
	char*	endptr;
	long double	tmp = std::strtold(&_source[0], &endptr);

	std::cout << "convDouble => tmp == " << tmp << std::endl;

	if (*endptr != 0)
		return (throw ScalarConverter::conversionException());
	else if (tmp < DBL_MIN || tmp > DBL_MAX)
		return (throw ScalarConverter::paramOutOfRange());

	_double = std::strtod(&_source[0], &endptr);
	std::cout << "convDouble => _float == " << _float << std::endl;
	return ;
}

void	ScalarConverter::convert( void )
{
	try{
		convertInt();
		convertFloat();
		convertDouble();
	}
	catch( std::exception& e ){
		std::cout << e.what() << std::endl;
	}

	return ;
}

std::ostream&	operator<<( std::ostream& os, ScalarConverter const& source )
{
	os << "ScalarConverter: source == " << source.getSource() << std::endl
	<< "\tSource to int == " << source.getInt() << std::endl
	<< "\tSource to float == " << source.getFloat() << std::endl
	<< "\tSource to double == " << source.getDouble() << std::endl;

	return (os);
}