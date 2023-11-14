#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct{
	int	i;
	std::string	s;
} Data;

class	Serializer
{
private:

public:
	Serializer( void );
	Serializer( Serializer const& source );
	~Serializer( void );

	Serializer&	operator=( Serializer const& source );

	uintptr_t	serializer(Data* ptr);
	Data*		deserializer(unintptr_t raw);
}

#endif