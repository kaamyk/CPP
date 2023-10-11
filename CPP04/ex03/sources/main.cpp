/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:16:46 by mcombeau          #+#    #+#             */
/*   Updated: 2023/10/11 14:45:45 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include <iostream>

int	main( void )
{
	Character	bobby("bobby");

	AMateria*	m1 = new Cure();
	AMateria*	m2 = new Ice();
	AMateria*	m3 = new Cure();
	AMateria*	m4 = new Ice();
	AMateria*	m5 = new Ice();
	AMateria*	m6 = new Cure();
	AMateria*	m7 = new Ice();

	bobby.equip(m1);
	bobby.printInventory();

	delete m1;
	delete m2;
	delete m3;
	delete m4;
	delete m5;
	delete m6;
	delete m7;

	// delete bobby;
	return (0);
}
