/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/11/04 14:20:40 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

ShrubberryCreationForm::ShrubberryCreationForm( void ):
						AForm( "Shruberry_Form", 145, 137 ),
						_target( "Unknown_target" )
{
	return ;
}

ShrubberryCreationForm::ShrubberryCreationForm( std::string const& target ):
										AForm("Shrubberry_Form", 145, 137),
										_target( target )
{
	return ;
}

ShrubberryCreationForm::~ShrubberryCreationForm( void )
{
	return ;
}

void	ShrubberryCreationForm::beExecuted( Bureaucrat const& executor ) const
{
	if (!this->getIfSigned())
		return (throw ShrubberryCreationForm::IsNotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		return (throw ShrubberryCreationForm::GradeTooLowException());
	else{
		std::string		fileName;
		fileName = _target;
		fileName.append("_shrubberry");
		std::ofstream	file(&fileName[0]);

		file << "\t\tB      C" << std::endl;
		file << "\t\t \\   /" << std::endl;
		file << "\t\t  \\ /" << std::endl;
		file << "\t\t   A" << std::endl;
	}
	return ;
}
