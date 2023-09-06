/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:03:08 by mcombeau          #+#    #+#             */
/*   Updated: 2023/09/06 11:17:03 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name)
{
	Zombie	*nZomb;

	std::cout << "Dans newZombie()" << std::endl;
	nZomb = new Zombie(name);
	if (nZomb == NULL)
		std::cout << "New Zombie allocation failed" << std::endl;
	return (nZomb);
}
