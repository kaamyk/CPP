/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 16:34:27 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

//			CONSTRUCTOR

//	DEFAULT
Zombie::Zombie(void)
{
	return ;
}

//	WITH A NAME PARAMETER
Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

//			DESTRUCTOR
Zombie::~Zombie(void)
{
	std::cerr << "In " << this->_name << " destructor" << std::endl;
	return ;
}


//			PUBLIC FUNCTIONS

void	Zombie::announce(void)
{
	std::cout << this->_name;
	std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::giveName(std::string name)
{
	this->_name = name;
	return ;
}
