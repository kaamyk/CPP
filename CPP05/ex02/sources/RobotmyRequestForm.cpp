/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/25 11:23:43 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm( void ): AForm( "Robot_Form", 72, 45 ),
												_target( "Unknown_target" )
{
	return ;
}

RobotmyRequestForm::RobotmyRequestForm( std::string const& target ):
										AForm("Robot_Form", 72, 45),
										_target( target )
{
	return ;
}

RobotmyRequestForm::~RobotmyRequestForm( void )
{
	return ;
}

void	RobotmyRequestForm::beExecuted( Bureaucrat const& executor ) const
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
