/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/06 11:48:19 by antoine          ###   ########.fr       */
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
	return ;
}


//			PUBLIC FUNCTIONS

void	Zombie::announce(void)
{
	std::cout << this->_name;
	std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
