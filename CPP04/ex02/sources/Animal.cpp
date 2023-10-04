/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 11:28:58 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Animal.hpp"

AAnimal::AAnimal( void ) : _type( "AAnimal" )
{
	std::cout << "In AAnimal default constructor" << std::endl;
	return ;
}

AAnimal::AAnimal( std::string const type ) : _type( type )
{
	std::cout << "In AAnimal typed constructor" << std::endl;
	return ;
}

// AAnimal::AAnimal( AAnimal const& source )
// {
// 	std::cout << "In AAnimal copy constructor" << std::endl;
// 	*this = source;
// 	return ;
// }

AAnimal::~AAnimal( void )
{
	std::cout << "In AAnimal destructor" << std::endl;
	return ;
}

AAnimal&	AAnimal::operator=( AAnimal const& source)
{
	if (this != &source)
		this->_type = source._type;
	return (*this);
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "GROUGROU I am a bad unknown animal" << std::endl;
	return ;
}

// std::string const&	AAnimal::getType( void ) const
// {
// 	return (this->_type);
// }
