/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/06 21:16:42 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanA::HumanB()
{
	return ;
}

HumanA::HumanB(std::string name, Weapon weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name
	<< "attacks with their" << this->_type.getType() << std::endl;
	return ;
}
