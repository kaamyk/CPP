/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 09:49:50 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main( void )
{
	FragTrap	toto("toto");
	ScavTrap	igor("igor");
	ScavTrap	huguette("huguette");


	// igor.setAttackDamage(500);
	// toto.setAttackDamage(500);
	// huguette.setAttackDamage(500);

	std::cout << std::endl;
	toto.highFivesGuys();
	std::cout << std::endl;
	
	toto.attack("huguette");
	huguette.takeDamage(toto.getAttackDamage());
	igor.attack("huguette");
	huguette.takeDamage(igor.getAttackDamage());
	huguette.printAttributes();
	std::cout << std::endl;

	igor.attack("toto");
	toto.takeDamage(igor.getAttackDamage());
	toto.printAttributes();
	std::cout << std::endl;

	toto.highFivesGuys();
	std::cout << std::endl;

	igor.guardGate();
	std::cout << std::endl;

	huguette.beRepaired(1);
	huguette.printAttributes();
	std::cout << std::endl;

	igor.printAttributes();
	std::cout << std::endl;

	return ( 0 );
}