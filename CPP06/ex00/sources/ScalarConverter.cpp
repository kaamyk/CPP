#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	return ;
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
	(void) source;
	return (*this);
}

void	ScalarConverter::convert( std::string s ) const
{
	std::stringstream	ss;
	int	res_i;
	float	res_f;
	double	res_d;
	char	res_c;

	ss << s;

	ss >> res_i;
	ss >> res_f;
	ss >> res_d;
	ss >> res_c;

	std::cout
	<< "res_i == " << res_i << std::endl
	<< "res_f == " << res_f << std::endl
	<< "res_d == " << res_d << std::endl
	<< "res_c == " << res_c << std::endl
	<< std::endl;
	(void) res_c;
	return ;
}