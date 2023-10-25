/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/25 11:23:40 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm( "Presidential_Form", 25, 5 ),
														_target( "Unknown_target" )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const& target ):
										AForm( "Presidential_Form", 25, 5 ),
										_target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

void	PresidentialPardonForm::beExecuted( Bureaucrat const& executor ) const
{
	if (!this->getIfSigned())
		return (throw PresidentialPardonForm::IsNotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		return (throw PresidentialPardonForm::GradeTooLowException());
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblerox." << std::endl;
	return ;
}
