/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/11 14:43:09 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}


void	Harl::debug( void )
{
	std::cout << "Message : Just doing some checkings" << std::endl;
	return ;
}

void	Harl::info( void )
{
	std::cout << "Information : Process in execution" << std::endl;
	return ;
}

void	Harl::warning( void )
{
	std::cout << "Warning : Hum ... There is a problem ... I am just warning you, I can handle it !" << std::endl;
	return ;
}


void	Harl::error( void )
{
	std::cout << "Error : Hold on ! You have to do something here !" << std::endl;
	return ;
}

void	Harl::complain( std::string level, size_t minimumLevel )
{
	typedef	void (Harl::*fctPtr)(void);

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	fctPtr		functions[4] = {&Harl::debug,
								&Harl::info,
								&Harl::warning,
								&Harl::error};

	for (size_t i = 0; i < 4; ++i)
	{
		if (i >= minimumLevel && levels[i].compare(level) == 0)
		{
			while (i < 4)
			{
				(this->*functions[i])();
				++i;
			}
		}
	}
	return ;
}
