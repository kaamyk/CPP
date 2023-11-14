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

char		ScalarConverter::getChar( void ) const
{
	return (_char);
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

int			ScalarConverter::getType( void ) const
{
	return (_type);
}

bool	ScalarConverter::detectNonNum( void )
{
	if (_source == "inf" || _source == "+inf" || _source == "inff" || _source == "+inff"){
		_type = NON_NUM;
		_int = std::numeric_limits<int>::infinity();
		_float = std::numeric_limits<float>::infinity();
		_double = std::numeric_limits<double>::infinity();
		return (1);
	}
	else if (_source == "-inf" || _source == "-inff"){
		_type = NON_NUM;
		_int = -1 * std::numeric_limits<int>::infinity();
		_float = -1 * std::numeric_limits<float>::infinity();
		_double = -1 * std::numeric_limits<double>::infinity();
		return (1);
	}
	else if (_source == "nan" || _source == "nanf"){
		_type = NON_NUM;
		_int = std::numeric_limits<int>::quiet_NaN();
		_float = std::numeric_limits<float>::quiet_NaN();
		_double = std::numeric_limits<double>::quiet_NaN();
		return (1);
	}
	return (0);
}

void	ScalarConverter::detectType( void )
{
	if (detectNonNum()){
		std::cout << "return" << std::endl;
		return ;
	}

	int	r;
	int	r1;
	if (_source.size() > 1){
		r = _source.find_first_of(".");
		r1 = _source.find_last_of(".");
		if (_source.find_first_of(".") != std::string::npos && r == r1)
		{
			r = _source.find_first_of("f");
			r1 = _source.find_last_of("f");
			if (_source[_source.size()] == 'f' && _source.find_first_of("f") != std::string::npos && r == r1)
				_type = FLOAT;
			else if (r == r1)
				_type = DOUBLE;
			else
				_type = INVALID;
		}
		else if (_source.find_first_not_of("0123456789") == std::string::npos)
			_type = INT;
		else
			_type = INVALID;
	}
	else if (_source.size() == 1){
		if (_source.find_first_not_of("0123456789") != std::string::npos)
			_type = CHAR;
		else
			_type = INT;
	}
	else
		_type = INVALID;
	std::cout << "end type == " << _type << std::endl;
}

void	ScalarConverter::convertToInt( void )
{
	char*	endptr;
	long	tmp = std::strtol(&_source[0], &endptr, 10);

	std::cout << "convInt => tmp == " << tmp << std::endl;

	if (*endptr != 0)
		return (throw ScalarConverter::conversionException());
	else if (tmp < INT_MIN || tmp > INT_MAX){
		_type = INVALID;
		return (throw ScalarConverter::paramOutOfRange());
	}

	_int = atoi(_source.c_str());
	std::cout << "convInt => _int == " << _int << std::endl;
	return ;
}

void	ScalarConverter::convertToFloat( void )
{
	char*	endptr;
	double	tmp = std::strtod(&_source[0], &endptr);

	std::cout << "convFloat => tmp == " << tmp << std::endl;

	std::cout << "source.end() == " << *_source.end() << std::endl;
	if (*_source.end() != 0)
		return (throw ScalarConverter::conversionException());
	else if (tmp < FLT_MIN || tmp > FLT_MAX){
		_type = INVALID;
		return (throw ScalarConverter::paramOutOfRange());
	}

	// _float = std::strtof(&_source[0], &endptr);
	_float = static_cast<float>(tmp);
	std::cout << "convFloat => _float == " << _float << std::endl;
	return ;
}

void	ScalarConverter::convertToDouble( void )
{
	char*	endptr;
	long double	tmp = std::strtold(&_source[0], &endptr);

	if (*endptr != 0)
		return (throw ScalarConverter::conversionException());
	else if (tmp < DBL_MIN || tmp > DBL_MAX){
		_type = INVALID;
		return (throw ScalarConverter::paramOutOfRange());
	}
	_double = static_cast<double>(tmp);
	return ;
}

void	ScalarConverter::convertToChar( void )
{
	_char = _source[0];
	return ;
}

void	ScalarConverter::convertFromChar( void )
{
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void	ScalarConverter::convertFromInt( void )
{
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void	ScalarConverter::convertFromFloat( void )
{
	_char = static_cast<char>(round(_float));
	_int = static_cast<int>(round(_float));
	_double = static_cast<double>(_float);
}

void	ScalarConverter::convertFromDouble( void )
{
	_char = static_cast<char>(round(_double));
	_int = static_cast<int>(round(_double));
	_float = static_cast<float>(_double);
}

void	ScalarConverter::convertToActualType( void )
{
	try{
		switch(_type){
		case CHAR:
			convertToChar();
			break ;
		case INT:
			convertToInt();
			break ;
		case FLOAT:
			convertToFloat();
			break ;
		case DOUBLE:
			convertToDouble();
			break ;
		case INVALID:
			std::cout << "Error: Input invalid." << std::endl;
			break ;
		}
	}
	catch( std::exception& e ){
		std::cout << e.what() << std::endl;
	}
	return ;
}

void	ScalarConverter::convert( void )
{
	detectType();
	convertToActualType();
	switch(_type){
	case CHAR:
		convertFromChar();
		break ;
	case INT:
		convertFromInt();
		break ;
	case FLOAT:
		convertFromFloat();
		break ;
	case DOUBLE:
		convertFromDouble();
		break ;
	case INVALID:
		std::cout << "Error: Input invalid." << std::endl;
		break ;
	}
	return ;
}

std::ostream&	operator<<( std::ostream& os, ScalarConverter const& source )
{
	os << "ScalarConverter: source == " << source.getSource() << std::endl;
	if(source.getType() == INVALID){
	os << "\tSource to char == Invalid" << std::endl
	<< "\tSource to int == Invalid" << std::endl
	<< "\tSource to float == Invalid" << std::endl
	<< "\tSource to double == Invalid" << std::endl;
	}
	else{
		if (source.getChar() >= 32 && source.getChar() != 127)
			os << "\tSource to char == " << source.getChar() << std::endl;
		else if (source.getType() == NON_NUM)
			os << "\tSource to char == Impossible" << std::endl;
		else
			os << "\tSource to char == Non printable" << std::endl;
		if (source.getType() == NON_NUM)
			os << "\tSource to int == Impossible" << std::endl;
		else
			os << "\tSource to int == " << source.getInt() << std::endl;

		if(source.getFloat() == static_cast<int>(source.getFloat()))
			os << "\tSource to float == " << std::fixed << std::setprecision(1) << source.getFloat() << "f" << std::endl;
		else
			os << "\tSource to float == " << source.getFloat() << "f" << std::endl;

		if (source.getDouble() == static_cast<int>(source.getDouble()))
			os << "\tSource to double == " << std::fixed << std::setprecision(1) << source.getDouble() << std::endl;
		else
			os << "\tSource to double == " << source.getDouble() << std::endl;
	}

	return (os);
}