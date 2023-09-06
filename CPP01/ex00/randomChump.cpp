/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/06 12:35:48 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <unistd.h> 
#include <iostream>


void	randomChump(std::string name)
{
	Zombie			chump(name);

	std::cout << "Guide : Alright! Call " << name << ", he may responde !" << std::endl;
	
	std::cout << "\t > * You scream somthing to " << name << " * <" << std::endl;
	std::cout << ".";
	sleep(1);
	std::cout << ".";
	sleep(1);
	std::cout << "." << std::endl << std::endl;
	sleep(1);
	chump.announce();
	std::cout << std::endl
	<< "Guide : * Unconfortable * Well ... That was interesting ... Let's forget it and move on ..."
	<< std::endl << std::endl;
}