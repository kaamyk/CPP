/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 10:51:46 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "In Cat constructor" << std::endl;
	this->_brain = new Brain;
	return ;
}

Cat::Cat(Cat const & src) : Animal()
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
		this->_type = source._type;
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
	this->_brain->printIdea(r);
	return ;
}
