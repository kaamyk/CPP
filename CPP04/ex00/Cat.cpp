/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/03 16:02:49 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "In Cat constructor" << std::endl;
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
