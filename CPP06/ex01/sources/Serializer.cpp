#include "Serializer.hpp"

Serializer::Serializer( void )
{
	return ;
}
	
Serializer::Serializer( Serializer const& source )
{
	*this = source;
	return ;
}

Serializer::~Serializer( void )
{
	return ;
}

Serializer&		Serializer::operator=( Serializer cosnt& source )
{
	return (*this);
}

