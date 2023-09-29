/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/29 20:04:48 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	std::cout << "In Dog constructor" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const & src) : Animal() 
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
	return ;
}

Dog::~Dog( void )
{
	return ;
}

Dog&	Dog::operator=( Dog const& source )
{
	if (this != &source)
		this->_type = source._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "WafWaf I am a dog !" << std::endl;
	return ;
}
