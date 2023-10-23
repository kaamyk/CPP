/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/23 17:52:39 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

ShrubberryCreationForm::ShrubberryCreationForm( void ): AForm( "Unknown", 145, 137 )
{
	return ;
}

ShrubberryCreationForm::ShrubberryCreationForm( std::string const& name ): AForm(name, 145, 137)
{
	return ;
}

ShrubberryCreationForm::~ShrubberryCreationForm( void )
{
	return ;
}

void	ShrubberryCreationForm::beExecuted( Bureaucrat const& B )
{
	std::string		fileName;
	fileName = B.getName();
	fileName.append("_shrubberry");
	std::ofstream	file(&fileName[0]);

	(void) B;
	file << "\t\tB      C" << std::endl;
	file << "\t\t \\   /" << std::endl;
	file << "\t\t  \\ /" << std::endl;
	file << "\t\t   A" << std::endl;
	return ;
}
