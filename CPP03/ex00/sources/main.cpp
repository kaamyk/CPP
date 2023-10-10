/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 17:50:07 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main( void )
{
	ClapTrap	toto("toto");
	ClapTrap	igor("igor");
	ClapTrap	huguette("huguette");

	toto.setAttackDamage(35);
	igor.setAttackDamage(1);
	huguette.setAttackDamage(1);

	toto.attack("huguette");	
	huguette.takeDamage(toto.getAttackDamage());
	igor.attack("huguette");
	huguette.takeDamage(igor.getAttackDamage());
	huguette.printAttributes();
	std::cout << std::endl;
	igor.attack("toto");
	toto.takeDamage(igor.getAttackDamage());
	huguette.beRepaired(1);
	huguette.printAttributes();
	return ( 0 );
}