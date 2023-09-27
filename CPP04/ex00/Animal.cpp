/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 12:19:54 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animal" );
{
	std::cout << "In Animal constructor" << std::enl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "In Animal destructor" << std::endl;
	return ;
}

void	Animal::makeSound( void )
{
	this->sound();
	return ;
}

const std::string&	Animal::getType( void )
{
	str::cout << "In " << this->getType() << "getType() fucntion" << std::endl;
	return (this->_type);
}
