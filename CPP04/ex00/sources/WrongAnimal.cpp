/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/20 11:21:30 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" )
{
	std::cout << "In WrongAnimal default constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const& source )
{
	std::cout << "In WrongAnimal copy constructor" << std::endl;
	*this = source;
	return ;
}

WrongAnimal::WrongAnimal( std::string const type ) : _type( type )
{
	std::cout << "In WrongAnimal typed constructor" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "In WrongAnimal destructor" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const& source)
{
	if (this != &source)
		this->_type = source._type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "GROUGROU I am a bad unknown WrongAnimal" << std::endl;
	return ;
}

std::string const&	WrongAnimal::getType( void ) const
{
	return (this->_type);
}
