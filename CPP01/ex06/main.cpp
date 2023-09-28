/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 17:31:13 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

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
	harl.complain( av[1] );
	std::cout << std::endl;
	return ( 0 );
}