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

ScalarConverter::ScalarConverter&	operator=( ScalarConverter const& source )
{
	( void ) source;
	return (*this);
}

static const char*	paramOutOfRange::what() const throw()
{
	return ("Error: Parameter out of range.");
}

static const char*	conversionException::what() const throw()
{
	return ("Error: string conversion failed.");
}

static std::string	getSource( void ) const
{
	return (_source);
}

static char		getChar( void ) const
{
	return (_char);
}

static int			getInt( void ) const
{
	return (_int);
}

static float		getFloat( void ) const
{
	return (_float);
}

static double		getDouble( void ) const
{
	return (_double);
}

static int			getType( void ) const
{
	return (_type);
}

static bool	detectNonNum( void )
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
	_type = INVALID;
	return (0);
}

static void	detectType( void )
{
	if (detectNonNum()){
		return ;
	}

	int	r;
	int	r1;
	if (_source.size() > 1){
		r = _source.find_first_of(".");
		r1 = _source.find_last_of(".");
		if (r != -1 && r == r1){
			r = _source.find_first_not_of("0123456789.");
			r1 = _source.find_last_not_of("0123456789.");
			std::cout << "r && r1 == " << r << " && " << r1 << std::endl;
			if (r != -1 && r == r1 && (size_t)r == _source.size() && _source[r] == 'f')
				_type = FLOAT;
			else if (r == -1 && r == r1)
				_type = DOUBLE;
			else
				_type = INVALID;
		}
		else if (r == -1 && _source.find_first_not_of("0123456789") == std::string::npos)
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

// static void	convertToInt( void )
// {
// 	char*	endptr;
// 	long	tmp = std::strtol(&_source[0], &endptr, 10);

// 	std::cout << "convInt => tmp == " << tmp << std::endl;

// 	if (*endptr != 0)
// 		return (throw conversionException());
// 	else if (tmp < INT_MIN || tmp > INT_MAX){
// 		_type = INVALID;
// 		return (throw paramOutOfRange());
// 	}

// 	_int = atoi(_source.c_str());
// 	std::cout << "convInt => _int == " << _int << std::endl;
// 	return ;
// }

// static void	convertFromChar( void )
// {
// 	// _int = static_cast<int>(_char);
// 	// _float = static_cast<float>(_char);
// 	// _double = static_cast<double>(_char);
// 	char	_char = _source[0];

// 	std::cout << "_int = " << static_cast<int>(_char) << std::endl
// 	<< "_float = " << static_cast<float>(_char) << std::endl
// 	<< "_double = " << static_cast<double>(_char) << std::endl;
// }

// static void	convertFromInt( void )
// {
// 	// _char = static_cast<char>(_int);
// 	// _float = static_cast<float>(_int);
// 	// _double = static_cast<double>(_int);

// 	std::cout << "_char = " << static_cast<char>(_int) << std::endl
// 	<< "_float = " << static_cast<float>(_int) << std::endl
// 	<< "_double = " << static_cast<double>(_int) << std::endl;
// }

// static float	convertToFloat( void )
// {
// 	char*	endptr;
// 	float	_float = 0.0f;
// 	double	tmp = std::strtod(&_source[0], &endptr);

// 	std::cout << "convFloat => tmp == " << tmp << std::endl;

// 	std::cout << "source.end() == " << *_source.end() << std::endl;
// 	if (*_source.end() != 0)
// 		return (throw conversionException());
// 	else if (tmp < FLT_MIN || tmp > FLT_MAX){
// 		_type = INVALID;
// 		return (throw paramOutOfRange());
// 	}

// 	_float = static_cast<float>(tmp);
// 	std::cout << "convFloat => _float == " << _float << std::endl;
// 	return (_float);
// }

// static void	convertFromFloat( void )
// {
// 	// _char = static_cast<char>(round(_float));
// 	// _int = static_cast<int>(round(_float));
// 	// _double = static_cast<double>(_float);
// 	float	_float = 0.0f

// 	try{
// 		_float = convertToFloat();
// 	}
// 	catch(std::exception& e){
// 		std::cout << "Convertion error: " << e.what() << std::endl;
// 		return ;
// 	}
// 	std::cout << "_char = " << static_cast<char>(round(_float)) << std::endl
// 	<< "_int = " << static_cast<int>(round(_float)) << std::endl
// 	<< "_double = " << static_cast<double>(_float) << std::endl;
// }

// static double	convertToDouble( void )
// {
// 	char*		endptr;
// 	double		_double = 0;
// 	long double	tmp = std::strtold(&_source[0], &endptr);

// 	if (*endptr != 0)
// 		return (throw conversionException());
// 	else if (tmp < DBL_MIN || tmp > DBL_MAX){
// 		_type = INVALID;
// 		return (throw paramOutOfRange());
// 	}
// 	_double = static_cast<double>(tmp);
// 	return ;
// }

// static void	convertFromDouble( void )
// {
// 	// _char = static_cast<char>(round(_double));
// 	// _int = static_cast<int>(round(_double));
// 	// _float = static_cast<float>(_double);
// 	double	_double = 0;

// 	try{
// 		_double = convertToDouble();
// 	}
// 	catch(std::exception& e){
// 		std::cout << "Convertion error: " << e.what() << std::endl;
// 		return ;
// 	}
// 	std::cout << "_char = " << static_cast<char>(round(_double)) << std::endl
// 	<< "_int = " << static_cast<int>(round(_double)) << std::endl
// 	<< "_float = " << static_cast<float>(_double) << std::endl;
// }

static void	convertToActualType( void )
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

static void	ScalarConverter::convert( void )
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
	os << "ScalarConverter: source == " << source.getSource() << std::endl
	<< "\tActual type == ";
	switch(source.getType()){
	case CHAR:
		os << "Char";
		break ;
	case INT:
		os << "Int";
		break ;
	case FLOAT:
		os << "Float";
		break ;
	case DOUBLE:
		os << "Double";
		break ;
	case NON_NUM:
		os << "Non num";
		break ;
	case INVALID:
		os << "Invalid";
		break ;
	}
	os << std::endl;
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