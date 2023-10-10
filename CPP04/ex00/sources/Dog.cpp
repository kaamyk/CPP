/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 19:00:51 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "In Dog constructor" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal() 
{
	std::cout << "In DOg copy constructor" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "In Dog destructor" << std::endl;
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
