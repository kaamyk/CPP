/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 12:28:10 by anvincen         ###   ########.fr       */
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