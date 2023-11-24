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
	Serializer( void );
	Serializer( Serializer const& source );

public:
	~Serializer( void );

	Serializer&	operator=( Serializer const& source );

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif