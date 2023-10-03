/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/03 15:59:36 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animal" )
{
	std::cout << "In Animal default constructor" << std::endl;
	return ;
}

Animal::Animal( Animal const& source )
{
	std::cout << "In Animal copy constructor" << std::endl;
	*this = source;
	return ;
}

Animal::Animal( std::string const type ) : _type( type )
{
	std::cout << "In Animal typed constructor" << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "In Animal destructor" << std::endl;
	return ;
}

Animal&	Animal::operator=( Animal const& source)
{
	if (this != &source)
		this->_type = source._type;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "GROUGROU I am a bad unknown animal" << std::endl;
	return ;
}

std::string const&	Animal::getType( void ) const
{
	return (this->_type);
}
