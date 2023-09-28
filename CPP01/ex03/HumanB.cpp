/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 16:32:24 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = new Weapon("");
	return ;
}

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their "; 
	if (this->_weapon->getType().empty() == 1)
		std::cout << " ... uuuh ... NOTHING ? Bare hands really ?" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}
