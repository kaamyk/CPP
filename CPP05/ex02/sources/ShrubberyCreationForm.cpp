/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/24 17:24:22 by anvincen         ###   ########.fr       */
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

void	ShrubberryCreationForm::beExecuted( Bureaucrat const& executor )
{
	if (!this->getIfSigned())
		return (throw ShrubberryCreationForm::IsNotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		return (throw ShrubberryCreationForm::GradeTooLowException());
	else{
		std::string		fileName;
		fileName = executor.getName();
		fileName.append("_shrubberry");
		std::ofstream	file(&fileName[0]);

		file << "\t\tB      C" << std::endl;
		file << "\t\t \\   /" << std::endl;
		file << "\t\t  \\ /" << std::endl;
		file << "\t\t   A" << std::endl;
	}
	return ;
}
