/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 16:32:29 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name( name )
												, _weapon( weapon )
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->_name
	<< "attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}
