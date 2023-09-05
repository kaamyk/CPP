/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/05 19:17:54 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	while (1)
	{
		Zombie		importantZombies;
		std::string	input;
		size_t		tries = 0;
		std::string	chumbName = "";

		std::cout << "What do you want to do ?" << std::endl;
		std::cout << "1 : Meet a real important zombie || 2 : Meet a chumb" << std::endl;
		std::cout << "Please type 1 or 2 :  ";
		std::getline(std::cin, input);
		std::cout << std::endl;

		if (input.empty() == 1 || (input != "1" && input != "2"))
			continue ;
		if (input == "1")
		{
			std::cout << "Dans 1" << std::endl;
		}
		else if (input == "2")
		{
			std::cout << "Guide : Umm ... I don't remember the name of this one ..."<< std::endl 
			<< "\t\tLet's give him a name real quick !"<< std::endl 
			<< "\t\t Do you have an idea ?" << std::endl;

			while (tries < 3 && input.empty() == 1)
			{
				++tries;
				std::cout << "\n\n\tType a name for the chump : ";
				std::getline(std::cin, chumbName);
			}
			if (tries == 3)
			{
				std::cout << "Guide : OK, this one does not inspires you !"
				<< "Let's move to the next one !" << std::endl;
				tries = 0;
				continue ;
			}
			a.randomChump(chumbName);
		}

	}
	return (0);
}