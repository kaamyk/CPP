/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 19:19:14 by antoine          ###   ########.fr       */
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

void	Harl::setMinimumLevel(std::string arg)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t	i = 0; i < 4; ++i)
		if (arg.compare(levels[i]) == 0)
		{
			this->_minimumLevel = i;
			return ;
		}
	this->_minimumLevel = 4;
	return ;
}


void	Harl::complain( std::string level )
{
	typedef	void (Harl::*fctPtr)(void);

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	fctPtr		functions[4] = {&Harl::debug,
								&Harl::info,
								&Harl::warning,
								&Harl::error};

	if (this->_minimumLevel == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	for (size_t i = 0; i < 4; ++i)
	{
		if (i >= this->_minimumLevel && levels[i].compare(level) == 0)
		{
			(this->*functions[i])();
			break ;
		}
	}
	return ;
}
