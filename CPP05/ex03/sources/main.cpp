/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/25 12:21:25 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotmyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int	main( void )
{
	std::string name;

	name = "Billy";
	Bureaucrat*	billy = new Bureaucrat(name, 20);
	name = "Tobby";
	Bureaucrat*	tobby = new Bureaucrat(name, 150);
	name = "Bibi";
	Bureaucrat* bibi = new Bureaucrat(name, 560);

	Intern	toto;

	(void) bibi;
	ShrubberryCreationForm*	A1 = toto.makeForm("Shrubberry Form", "Forest");
	RobotmyRequestForm*		A4("Robot Form", "Wall-E");
	PresidentialPardonForm*	A6("Presidential form", "Biden");
	
	std::cout << *A1 << std::endl;
	std::cout << *A4 << std::endl;
	std::cout << *A6 << std::endl;

	billy->signForm(*A1);
	billy->signForm(*A4);
	billy->signForm(*A6);
	std::cout << std::endl;
	billy->executeForm(*A1);
	tobby->executeForm(*A4);
	billy->executeForm(*A6);

	delete billy;
	delete tobby;
	delete bibi;
	return (0);
}
