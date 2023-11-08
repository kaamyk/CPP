#ifndef SCALARCONV_HPP
#define SCALARCONV_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <exception>

class ScalarConverter
{
private:
	std::string	_source;
	char	_char;
	int		_int;
	float	_float;
	double	_double;

public:
	ScalarConverter( void );
	ScalarConverter( std::string const& source );
	ScalarConverter( ScalarConverter const& source );
	~ScalarConverter( void );

	ScalarConverter&	operator=( ScalarConverter const& source );

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

	std::string	getSource( void )const;
	int			getInt( void ) const;
	float		getFloat( void ) const;
	double		getDouble( void ) const;


	void	convertInt( void );
	void	convertFloat( void );
	void	convertDouble( void );
	void	convert( void );

};

std::ostream&	operator<<( std::ostream& os, ScalarConverter const& source );

#endif