/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/09 18:34:09 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main( void )
{
	FragTrap	toto("toto");
	ScavTrap	igor("igor");
	ScavTrap	huguette("huguette");
	DiamondTrap	bibi("bibi");

	bibi.printAttributes();

	toto.highFivesGuys();
	toto.attack("huguette");	
	huguette.takeDamage(toto.getAttackDamage());
	igor.attack("huguette");
	huguette.takeDamage(igor.getAttackDamage());
	huguette.printAttributes();
	igor.attack("toto");
	toto.takeDamage(igor.getAttackDamage());
	toto.printAttributes();
	igor.guardGate();
	huguette.beRepaired(1);
	huguette.printAttributes();
	igor.printAttributes();
	return ( 0 );
}