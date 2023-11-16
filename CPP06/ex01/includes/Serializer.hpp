#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

typedef struct Data{
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

	uintptr_t	serialize(Data* ptr);
	Data*		deserialize(uintptr_t raw);
};

#endif