/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/18 15:23:19 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat"), _brain(new Brain)
{
	std::cout << "In Cat constructor" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const & src) : AAnimal(), _brain(NULL)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
	return ;
}

Cat::~Cat( void )
{
	std::cout << "In Cat destructor" << std::endl;
	delete _brain;
	return ;
}

Cat&	Cat::operator=( Cat const& source )
{
	if (this != &source)
	{
		this->_type = source._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*source._brain);
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "MeowMeow I am a cat !" << std::endl;
	return ;
}

void	Cat::setIdea(unsigned int const r, std::string const newIdea)
{
	this->_brain->setIdea(r, newIdea);
	return ;
}

void	Cat::printIdea(unsigned int const r) const
{
	std::cout << _type << " : ";
	this->_brain->printIdea(r);
	return ;
}
