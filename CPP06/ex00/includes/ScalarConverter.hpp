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
	ScalarConverter( void );
	ScalarConverter( std::string const& source );
	ScalarConverter( ScalarConverter const& source );

public:
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