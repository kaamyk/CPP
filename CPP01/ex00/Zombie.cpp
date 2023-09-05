/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/05 19:13:04 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h> 
#include "Zombie.hpp"

//			CONSTRUCTOR
Zombie::Zombie(void)
{
	std::cout << "In Zombie constructor" << std::endl;	
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "In Zombie destructor" << std::endl;
	return ;
}


//			PUBLIC FUNCTIONS

void	announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	return (NULL);
}

void	randomChump(std::string name)
{
	std::string		messageToChumb = "";

	std::cout << "Guide : Alright! Call " << name << ", he may responde !" << std::endl;
	while (messageToChumb.empty() == 1) 
	{
		std::cout << "\n\n\t Write what you want to scream to " << name << ":  ";
		std::getline(std::cin, messageToChumb);
	}
	std::cout << "\t > * You sream * <" << std::endl;
	std::cout << "." << std::endl;
	sleep(1);
	std::cout << ".." << std::endl;
	sleep(1);
	std::cout << "..." << std::endl;
	sleep(1);
	std::cout <<  name << " :  ";
	announce();
}
