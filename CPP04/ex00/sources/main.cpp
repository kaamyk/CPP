/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/20 11:21:38 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main( void )
{
	const Animal* A = new Animal();
	const Animal* D = new Dog();
	const Animal* C = new Cat();

	const WrongAnimal* WA = new WrongAnimal();
	const WrongAnimal* WC = new WrongCat();

	std::cout << std::endl;
	std::cout << C->getType() << " " << std::endl;
	std::cout << D->getType() << " " << std::endl;
	std::cout << std::endl;
	C->makeSound();
	D->makeSound();
	A->makeSound();

	std::cout << std::endl;
	WC->makeSound();
	WA->makeSound();

	std::cout << std::endl;
	delete A;
	delete D;
	delete C;
	std::cout << std::endl;
	delete WA;
	delete WC;
	return 0;
}