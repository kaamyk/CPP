/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 14:49:24 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	bibi("bibi");
	FragTrap	toto("toto");
	ScavTrap	igor("igor");
	ScavTrap	huguette("huguette");

	bibi.printAttributes();

	toto.highFivesGuys();
	std::cout << std::endl;
	toto.attack("huguette");	
	huguette.takeDamage(toto.getAttackDamage());
	std::cout << std::endl;
	igor.attack("huguette");
	huguette.takeDamage(igor.getAttackDamage());
	huguette.printAttributes();
	std::cout << std::endl;
	igor.attack("toto");
	toto.takeDamage(igor.getAttackDamage());
	toto.printAttributes();
	std::cout << std::endl;
	igor.guardGate();
	std::cout << std::endl;
	huguette.beRepaired(1);
	huguette.printAttributes();
	std::cout << std::endl;
	bibi.attack("igor");
	igor.takeDamage(bibi.getAttackDamage());
	igor.printAttributes();
	return ( 0 );
}