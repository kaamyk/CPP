/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/08 15:09:00 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include "Weapon.hpp"
# include <iostream>

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
	std::cout << "Apres modif _type == " << this->_type << std::endl;
	return ;
}

#endif
