/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/11/06 10:05:45 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

ShrubberryCreationForm::ShrubberryCreationForm( void ):
						AForm( "Shruberry_Form", 137, 145 ),
						_target( "Unknown_target" )
{
	return ;
}

ShrubberryCreationForm::ShrubberryCreationForm( std::string const& target ):
										AForm( "Shrubberry_Form", 137, 145 ),
										_target( target )
{
	return ;
}

ShrubberryCreationForm::~ShrubberryCreationForm( void )
{
	return ;
}

void	ShrubberryCreationForm::execute( Bureaucrat const& executor ) const
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
