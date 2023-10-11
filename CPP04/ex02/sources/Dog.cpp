/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 10:33:22 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) : AAnimal("Dog")
{
	std::cout << "In Dog constructor" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src) : AAnimal() 
{
	std::cout << "In Dog copy constructor" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "In Dog destructor" << std::endl;
	delete _brain;
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

void	Dog::setIdea(unsigned int const r, std::string const newIdea)
{
	this->_brain->setIdea(r, newIdea);
	return ;
}

void	Dog::printIdea(unsigned int const r) const
{
	std::cout << _type << " : ";
	this->_brain->printIdea(r);
	return ;
}
