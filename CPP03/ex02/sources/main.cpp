/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 18:49:58 by anvincen         ###   ########.fr       */
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


	igor.setAttackDamage(500);
	toto.setAttackDamage(500);
	huguette.setAttackDamage(500);

	toto.highFivesGuys();
	toto.attack("huguette");	
	huguette.takeDamage(toto.getAttackDamage());
	igor.attack("huguette");
	huguette.takeDamage(igor.getAttackDamage());
	huguette.printAttributes();
	igor.attack("toto");
	toto.takeDamage(igor.getAttackDamage());
	toto.printAttributes();
	toto.highFivesGuys();
	igor.guardGate();
	huguette.beRepaired(1);
	huguette.printAttributes();
	igor.printAttributes();
	return ( 0 );
}