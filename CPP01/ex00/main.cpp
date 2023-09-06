/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/06 15:37:15 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

std::string		getInput(std::string message, std::string errMessage)
{
	std::string	input;
	size_t		tries = 0;

	while (tries < 3 && input.empty() == 1)
	{
		++tries;
		std::cout << message;
		std::getline(std::cin, input);
		std::cout << std::endl;
	}
	if (tries == 3)
	{
		std::cout << errMessage << std::endl;
		return (NULL);
	}
	return (input);
}

void		writeScript(std::string script)
{
	std::cout << script << std::endl;
}

int	main(void)
{
	Zombie		*importantZombies[3];
	std::string	option;
	std::string	name;
	size_t		n;

	importantZombies[0] = newZombie("Olaf");
	importantZombies[1] = newZombie("Didier");
	importantZombies[2] = newZombie("Bazouk");

	while (1)
	{


		std::cout << "Guide : So ! What do you want to do ?" << std::endl;
		std::cout << "1 : Meet one of threee important zombies || 2 : Meet a chumb || 3 : Quit" << std::endl;

		option = getInput("Please type '1', '2' or '3' :  ", "");
		if (option.empty() == 1)
			continue ;
		if (option == "1")
		{
			writeScript("Guide : Let's meet our first important zombie !\n\t (The guide shows you a paper with three name : Olaf, Didier and Bazouk)\n");
			name = getInput("Guide : (He looks very excited) Which one do you want to see ?  "
				, "Guide : (He looks very excited) Just choose between Olaf, Didier and Bazouk !");
			if (name.empty() == 1)
				continue ;

			if (name == "Olaf")
				importantZombies[0]->announce();
			else if (name == "Didier")
				importantZombies[1]->announce();
			else if (name == "Bazouk")
				importantZombies[2]->announce();
			else
			{
				std::cout << "Guide : (He seems upset) OK ! You don't want to see our VIZ ! HHHHhhhh ..."
				<< std::endl;
				continue ;
			}
			
			std::cout << "Guide : * VERY PROUD * What a speech ! Thanks Man ! You are a real legend !" << std::endl;
			std::cout << std::endl;
		}
		else if (option == "2")
		{
			writeScript("Guide : Umm ... I don't remember the name of this one ...\n\tLet's give him a name real quick !\n\tDo you have an idea ?\n");
			name = getInput("\n\tType a name for the chump : "
					, "Guide : OK, this one does not inspires you ! Let's move to the next one !");
			if (name.empty() == 1)
				continue ;
			
			randomChump(name);
		}
		else if (option == "3")
		{
			delete(importantZombies[0]);
			delete(importantZombies[1]);
			delete(importantZombies[2]);
			break ;
		}
	}
	return (0);
}