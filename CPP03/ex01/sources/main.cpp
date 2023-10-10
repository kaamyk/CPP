/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 18:13:44 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main( void )
{
	ScavTrap	toto("toto");
	ScavTrap	igor("igor");
	ScavTrap	huguette("huguette");

	toto.setAttackDamage(200);
	// igor.setAttackDamage(1);
	// huguette.setAttackDamage(1);

	toto.attack("huguette");	
	huguette.takeDamage(toto.getAttackDamage());
	igor.attack("huguette");
	huguette.takeDamage(igor.getAttackDamage());
	huguette.printAttributes();
	toto.attack("igor");
	igor.takeDamage(toto.getAttackDamage());
	igor.guardGate();
	huguette.beRepaired(1);
	huguette.printAttributes();
	return ( 0 );
}