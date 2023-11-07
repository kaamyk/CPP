#ifndef SCALARCONV_HPP
#define SCALARCONV_HPP

#include <iostream>
#include <typeinfo>
#include <string>
#include <sstream>

class ScalarConverter
{
private:

public:
	ScalarConverter( void );
	ScalarConverter( ScalarConverter const& source );
	~ScalarConverter( void );

	ScalarConverter&	operator=( ScalarConverter const& source );

	void	convert( std::string s ) const;
};

#endif