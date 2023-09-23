/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/23 12:32:28 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	toto("toto");
	ScavTrap	tutu("tutu");

	toto.takeDamage( 2 );	
	tutu.takeDamage( 2 );	
	toto.attack( "tutu" );	
	tutu.takeDamage( toto.getAttackDamage() );
	toto.beRepaired( 5 );
	return ( 0 );
}