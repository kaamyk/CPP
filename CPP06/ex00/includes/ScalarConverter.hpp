#ifndef SCALARCONV_HPP
#define SCALARCONV_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include <string>
#include <cstdlib>
#include <ctype.h>
#include <climits>
#include <limits>
#include <cfloat>
#include <cmath>

enum {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NON_NUM,
	INVALID
};

class ScalarConverter
{
private:
	std::string	_source;
	int		_type;
	char	_char;
	int		_int;
	float	_float;
	double	_double;

	// void	convertToChar( void );
	// void	convertToInt( void );
	// void	convertToFloat( void );
	// void	convertToDouble( void );
	// void	convertToActualType( void );
	// void	convertFromChar( void );
	// void	convertFromInt( void );
	// void	convertFromFloat( void );
	// void	convertFromDouble( void );
	// bool	detectNonNum( void );
	// void	detectType( void );

public:
	ScalarConverter( void );
	ScalarConverter( std::string const& source );
	ScalarConverter( ScalarConverter const& source );
	~ScalarConverter( void );

	ScalarConverter&	operator=( ScalarConverter const& source );

	static void	convert( std::string source );

};

class	paramOutOfRange: public std::exception
{
public:
	virtual const char* what() const throw();
};
class	conversionException: public std::exception
{
public:
	virtual const char* what() const throw();
};

// std::ostream&	operator<<( std::ostream& os, ScalarConverter const& source );

#endif