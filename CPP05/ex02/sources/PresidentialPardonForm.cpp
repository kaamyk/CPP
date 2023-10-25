/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/25 10:01:48 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm( "Unknown", 25, 5 )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const& name ): AForm(name, 25, 5)
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
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblerox." << std::endl;
	return ;
}
