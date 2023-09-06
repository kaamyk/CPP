/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/06 16:24:17 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <cstdlib>

Zombie* zombieHorde( int N, std::string name );

size_t		getZombieNb(std::string message, std::string errMessage)
{
	std::string	input;
	int			n = 0;
	size_t		tries = 0;

	while (tries <= 3 && input.empty() == 1)
	{
		++tries;
		std::cout << message;
		std::getline(std::cin, input);
		if (input.empty() == 1)
			continue ;
		if (input.find_first_not_of("0123456789+-") != std::string::npos)
		{
			std::cout << "Cashier : You little joker ! That's not a number !\n"
			<< "\tPlease, pick a positive number !\n";
			input = "";
			continue ;
		}
		else if (input.length() > 4)
		{
			std::cout << "Cashier : Wow ! Do you want to take all the stock ?!\n"
			<< "\tPlease, pick a number between 1 and 9999 !\n";
			input = "";
			continue ;
		}
		n = std::atoi(&input[0]);
		if (n <= 0)
		{
			std::cout << "Cashier : You little joker ! Come on we can't make negative horde !\n"
			<< "\tPlease, pick a positive number !\n";
			n = 0;
			continue ;
		}
		std::cout << std::endl;
	}
	if (tries == 3)
	{
		std::cout << errMessage << std::endl;
		return (0);
	}
	return (n);
}

std::string	getName(std::string message, std::string errMessage)
{
	std::string	input;
	int			n = 0;
	size_t		tries = 0;

	while (tries <= 3 && input.empty() == 1)
	{
		++tries;
		std::cout << message;
		std::getline(std::cin, input);
		if (input.empty() == 1)
		{
			std::cout << "Cashier : Please, I need your name.\n";
			continue ;
		}
		if (input.find_first_of("0123456789") != std::string::npos)
		{
			std::cout << "Cashier : Are you the Elon Musk's son ? You don't look like him !"
			<< " Give me your real name please\n";
			input = "";
			n = 0;
			continue ;
		}
		std::cout << std::endl;
	}
	if (tries == 3)
	{
		std::cout << errMessage << std::endl;
		return (0);
	}
	return (input);
}

int	main(void)
{
	Zombie		*horde;
	std::string	name;
	int			nbZb = 0;

	while (nbZb == 0)
	{
		std::cout << "Cashier : Hi ! How many zombies do you want in your horde(er) ?" << std::endl;
		nbZb = getZombieNb("Please, type a number :  "
			, "Cashier : Hum ... Can you talk ? ... Oh wait ! Are you a zombie yourself ?!\n");
		if (nbZb == 0)
		{
			std::cout << "Cashier : Ok, next person please !\n" << std::endl;
			continue ;
		}
		std::cout << "Cashier : That's all good, can I have a name for the horde(er) ?" << std::endl;
		name = getName("Type your name :  ", "Cashier : Ok, the order process timed out. Let's do it again !");
		horde = zombieHorde(nbZb, name);
	}

	for (size_t	i = 0; i < nbZb; ++i)
		horde[i].announce();

	std::cout << "\nCashier : Here is your command ! Have a good day ! Next person please !!" << std::endl;
	delete [] horde;
	return (0);
}