/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/08 11:29:43 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main( void )
{
	ClapTrap	toto("toto");
	ClapTrap	igor("igor");
	ClapTrap	huguette("huguette");

	toto.setAttackDamage(2);
	igor.setAttackDamage(1);
	huguette.setAttackDamage(1);

	toto.attack("huguette");	
	huguette.takeDamage(toto.getAttackDamage());
	igor.attack("huguette");
	huguette.takeDamage(igor.getAttackDamage());
	huguette.printAttributes();
	igor.attack("toto");
	toto.takeDamage(igor.getAttackDamage());
	huguette.beRepaired(1);
	huguette.printAttributes();
	return ( 0 );
}