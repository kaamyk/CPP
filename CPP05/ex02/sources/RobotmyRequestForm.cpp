/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/26 12:06:06 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm( void ): AForm( "Robot_Form", 45, 72 ),
												_target( "Unknown_target" )
{
	return ;
}

RobotmyRequestForm::RobotmyRequestForm( std::string const& target ):
										AForm("Robot_Form", 45, 72),
										_target( target )
{
	return ;
}

RobotmyRequestForm::~RobotmyRequestForm( void )
{
	return ;
}

void	RobotmyRequestForm::execute( Bureaucrat const& executor ) const
{
	if (!this->getIfSigned())
		return (throw RobotmyRequestForm::IsNotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		return (throw RobotmyRequestForm::GradeTooLowException());
	else{
		std::cout << "BZZZ BIIP BOOP !" << std::endl;
		if (rand() % 2)
			std::cout << _target << " has been robotomized." << std::endl;
		else
			std::cout << _target << " Robotomy failed ..." << std::endl;
	}
	return ;
}
