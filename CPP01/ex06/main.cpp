/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/11 14:48:46 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

size_t	setMinimumLevel(std::string arg)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t	i = 0; i < 4; ++i)
		if (arg.compare(levels[i]) == 0)
			return (i);
	return (4);
}

int	main(int ac, char **av)
{
	Harl	harl;
	size_t	minimumLevel;

	if (ac < 2)
	{
		std::cout << "Please, give one argument to the program" << std::endl;
		return (1);
	}
	else if (ac > 2)
		std::cout << "\t > Only the first parameter will be considered. <" << std::endl;
	minimumLevel = setMinimumLevel(av[1]);
	if (minimumLevel == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	harl.complain( av[1], minimumLevel );
	return (0);
}