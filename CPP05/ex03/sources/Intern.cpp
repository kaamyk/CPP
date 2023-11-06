/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/11/06 10:52:36 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern( void )
{
	_makerTab[0] = &Intern::makePresidentialForm;
	_makerTab[1] = &Intern::makeRobotForm;
	_makerTab[2] = &Intern::makeShrubberryForm;
	return;
}

Intern::Intern( Intern const& source)
{
	*this = source;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern&		Intern::operator=( Intern const& source )
{
	(void) source;
	return (*this);
}

AForm*	Intern::makePresidentialForm( std::string target )
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeRobotForm( std::string target )
{
	return (new RobotmyRequestForm(target));
}

AForm*	Intern::makeShrubberryForm(std::string target)
{
	return (new ShrubberryCreationForm(target));
}

AForm*		Intern::makeForm( const std::string formName, const std::string target )
{
	std::string		possibleFormName[3] = {"Presidential Form", "Robot Form", "Shrubberry Form"};
	unsigned int	i = 0;

	for (i = 0; i < 3; ++i)
	{
		if (!formName.compare(possibleFormName[i]))
			return (this->*_makerTab[i])(target);	
	}
	throw(Intern::InvalidFormException());
	return (NULL);
}

const char*	Intern::InvalidFormException::what( void ) const throw()
{
	return("Invalid form name : couldn't create a new Form");
}

