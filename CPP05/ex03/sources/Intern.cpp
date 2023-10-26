/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/26 10:36:09 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern( void )
{
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

AForm*		Intern::makeForm( const std::string formName, const std::string target )
{
	std::string		possibleFormName[3] = {"Presidential Form", "Robot Form", "Shrubberry Form"};
	unsigned int	i = 0;

	for (i = 0; i < 3; ++i)
	{
		if (!formName.compare(possibleFormName[i]))
			break ;
	}
	switch (i){
		case (0):
			std::cout << "Intern creates Presidential Form" << std::endl;
			return (new PresidentialPardonForm(target));
		case (1):
			std::cout << "Intern creates Robot Form" << std::endl;
			return (new RobotmyRequestForm(target));
		case (2):
			std::cout << "Intern creates Shrubberry Form" << std::endl;
			return (new ShrubberryCreationForm(target));
		default:
			// std::cout << "Invalid form name : could not create a new form " << formName << std::endl;
			throw Intern::InvalidFormException();
			return (NULL);
	}
}

const char*	Intern::InvalidFormException::what( void ) const throw()
{
	return("Invalid form name : couldn't create a new Form");
}

