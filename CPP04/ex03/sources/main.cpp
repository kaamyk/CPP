/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:16:46 by mcombeau          #+#    #+#             */
/*   Updated: 2023/10/18 16:13:58 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include <iostream>

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		// src->printAttributes();
		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		// me->printIventory();

		std::cout << std::endl;
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		std::cout << ">>> Next use() should not print anything <<<" << std::endl;
		me->use(3, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl;

		Character	tobby("tobby");
		Character	anne("anne");
		Character*	copyTobby = new Character(tobby);
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		AMateria* tmp;

		tmp = src->createMateria("ice");
		tobby.equip(tmp);
		tmp = src->createMateria("cure");
		tobby.equip(tmp);
		tmp = src->createMateria("ice");
		tobby.equip(tmp);
		tobby.printInventory();
		copyTobby->printInventory();
		delete copyTobby;
		std::cout << "----------------" << std::endl;
		Character*	copyTobby1 = new Character(tobby);

		std::cout << "tobby use" << std::endl;
		tobby.use(2, anne);
		std::cout << "copyTobby use" << std::endl;
		copyTobby1->use(2, anne);

		delete src;
		delete copyTobby1;
	}
	return (0);
}
