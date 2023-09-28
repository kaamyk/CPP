/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 16:34:54 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

# include "Weapon.hpp"

//			CONSTRUCTOR
Weapon::Weapon( void )
{
	return ;
}

Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}

//			DESTRUCTOR
Weapon::~Weapon( void )
{
	return ;
}

std::string const	&Weapon::getType( void )
{
	return ( this->_type );
}

void				Weapon::setType( std::string const newType )
{
	if (this->getType().empty() == 1)
		std::cout << "_type is empty";
	this->_type = newType;
	return ;
}
