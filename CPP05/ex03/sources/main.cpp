/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/26 11:06:11 by antoine          ###   ########.fr       */
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

	Intern	toto = Intern();

	(void) bibi;
	AForm*	A1 = NULL;
	AForm*	A4 = NULL;
	AForm*	A6 = NULL;
	
	try{
		A1 = toto.makeForm("Shrubberry Form", "Forest");
		A4 = toto.makeForm("Robot Form", "Wall-E");
		A6 = toto.makeForm("Presidential Form", "Biden");
		// A6 = toto.makeForm("Presidential Frm", "Biden");
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << *A1 << std::endl;
	std::cout << *A4 << std::endl;
	if (A6)
		std::cout << *A6 << std::endl;

	billy->signForm(*A1);
	billy->signForm(*A4);
	if (A6)
		billy->signForm(*A6);
	std::cout << std::endl;
	billy->executeForm(*A1);
	tobby->executeForm(*A4);
	if (A6)
		billy->executeForm(*A6);

	delete billy;
	delete tobby;
	delete bibi;

	delete A1;
	delete A4;
	if (A6)
		delete A6;
	return (0);
}
