/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 09:45:35 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main( void )
{
	ScavTrap	toto("toto");
	ScavTrap	igor("igor");
	ScavTrap	huguette("huguette");

	// toto.setAttackDamage(200);
	// igor.setAttackDamage(1);
	// huguette.setAttackDamage(1);

	std::cout << std::endl;
	toto.attack("huguette");	
	huguette.takeDamage(toto.getAttackDamage());
	igor.attack("huguette");
	huguette.takeDamage(igor.getAttackDamage());
	huguette.printAttributes();
	std::cout << std::endl;
	toto.attack("igor");
	igor.takeDamage(toto.getAttackDamage());
	std::cout << std::endl;
	igor.guardGate();
	std::cout << std::endl;
	huguette.beRepaired(1);
	huguette.printAttributes();
	std::cout << std::endl;
	return ( 0 );
}