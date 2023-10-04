/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 10:56:29 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

Animal**	initializeArray( void )
{
	Animal** arr = new Animal*[10];

	for (unsigned int i = 0; i < 5; ++i)
		arr[i] = new Dog();
	for (unsigned int i = 5; i < 10; ++i)
		arr[i] = new Cat();
	return (arr);
}

void	deletionTests( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal**		arr = initializeArray();

	std::cout << "\t----  Deletion tests  ----" << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl << "Deleting array :" << std::endl;
	for (unsigned int i = 0; i < 10; ++i)
		delete arr[i];
	delete [] arr;
	return ;
}

void	testIdeasCopy( void )
{
	Dog*	Scooby = new Dog();
	Cat*	Garfield = new Cat();

	std::cout << "\t----  Ideas tests  ----" << std::endl;
	std::cout << "Scooby gets a first idea !" << std::endl;
	Scooby->setIdea(0, "Mmmh ... Scooby snacks !");
	std::cout << "Scooby gets a second idea !" << std::endl;
	Scooby->setIdea(1, "Where is Shaggy ?!");
	std::cout << std::endl;

	std::cout << "Garfield gets an idea too !" << std::endl;
	Garfield->setIdea(0, "Let's take a nap ...");
	std::cout << "Garfield gets a second idea !" << std::endl;
	Garfield->setIdea(1, "Is there any lasagnia left ?");
	std::cout << std::endl;

	std::cout << "Let's see what they were thinking about !" << std::endl;
	Scooby->printIdea(0);
	Scooby->printIdea(1);
	Garfield->printIdea(0);
	Garfield->printIdea(1);

	std::cout << "\t----  Copy tests  ----" << std::endl;
	std::cout << "Let's clone Scooby and his ideas" << std::endl;
	const Dog*	cloneScooby(Scooby);
	std::cout << "And same with Garfield" << std::endl;
	const Cat*	cloneGarfield(Garfield);

	std::cout << "Let's check the clones ideas" << std::endl;
	cloneScooby->printIdea(0);
	cloneScooby->printIdea(1);
	cloneGarfield->printIdea(0);
	cloneGarfield->printIdea(1);

	delete Scooby;
	delete Garfield;
	// delete cloneScooby;
	// delete cloneGarfield;
	return ;
}

int main( void )
{
	deletionTests();
	testIdeasCopy();
	return (0);
}