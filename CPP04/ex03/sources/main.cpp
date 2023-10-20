/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:16:46 by mcombeau          #+#    #+#             */
/*   Updated: 2023/10/20 11:10:44 by anvincen         ###   ########.fr       */
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

		std::cout << std::endl;
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

		std::cout << std::endl;
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		// std::cout << ">>> Next use() should not print anything <<<" << std::endl;
		me->use(3, *bob);

		std::cout << std::endl;
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

		std::cout << std::endl;
		tmp = src->createMateria("ice");
		tobby.equip(tmp);
		tmp = src->createMateria("cure");
		tobby.equip(tmp);
		tmp = src->createMateria("ice");
		tobby.equip(tmp);
		tobby.printInventory();
		copyTobby->printInventory();
		std::cout << "----------------" << std::endl;
		Character*	copyTobby1 = new Character(tobby);

		std::cout << std::endl;
		std::cout << "tobby use" << std::endl;
		tobby.use(2, anne);
		std::cout << "copyTobby use" << std::endl;
		copyTobby->use(2, anne);
		std::cout << "copyTobby1 use" << std::endl;
		copyTobby1->use(2, anne);

		std::cout << std::endl;
		delete src;
		delete copyTobby;
		delete copyTobby1;
	}
	return (0);
}
