/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/26 12:06:11 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm( "Presidential_Form", 5, 25 ),
														_target( "Unknown_target" )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const& target ):
										AForm( "Presidential_Form", 5, 25 ),
										_target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

void	PresidentialPardonForm::execute( Bureaucrat const& executor ) const
{
	if (!this->getIfSigned())
		return (throw PresidentialPardonForm::IsNotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		return (throw PresidentialPardonForm::GradeTooLowException());
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblerox." << std::endl;
	return ;
}
