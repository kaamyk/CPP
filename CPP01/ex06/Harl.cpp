/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 17:29:56 by anvincen         ###   ########.fr       */
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
	int		nb_l;
	typedef	void (Harl::*fctPtr)(void);

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	fctPtr		functions[4] = {&Harl::debug,
								&Harl::info,
								&Harl::warning,
								&Harl::error};

	for (nb_l = 0; nb_l < 4 && levels[nb_l].compare(level) != 0; ++nb_l)
			;
	switch (nb_l)
	{
		case (0) :
			(this->*functions[0])();
			++nb_l;
		case (1) :
			(this->*functions[1])();
			++nb_l;
		case (2) :
			(this->*functions[2])();
			++nb_l;
		case (3) :
			(this->*functions[3])();
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}
