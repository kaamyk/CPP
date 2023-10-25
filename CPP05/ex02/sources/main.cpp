/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/25 11:37:44 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotmyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main( void )
{
	std::string name;

	name = "Billy";
	Bureaucrat*	billy = new Bureaucrat(name, 20);
	name = "Tobby";
	Bureaucrat*	tobby = new Bureaucrat(name, 150);
	name = "Bibi";
	Bureaucrat* bibi = new Bureaucrat(name, 560);

	(void) bibi;
	ShrubberryCreationForm	A1;
	ShrubberryCreationForm	A2("Forest");
	RobotmyRequestForm		A3;
	RobotmyRequestForm		A4("Wall-E");
	PresidentialPardonForm	A5;
	PresidentialPardonForm	A6("Biden");
	
	std::cout << A1 << std::endl;
	std::cout << A2 << std::endl;
	std::cout << A3 << std::endl;
	std::cout << A4 << std::endl;
	std::cout << A5 << std::endl;
	std::cout << A6 << std::endl;

	billy->signForm(A1);
	billy->signForm(A2);
	billy->signForm(A3);
	billy->signForm(A4);
	billy->signForm(A5);
	billy->signForm(A6);
	std::cout << std::endl;
	billy->executeForm(A1);
	tobby->executeForm(A2);
	billy->executeForm(A3);
	tobby->executeForm(A4);
	tobby->executeForm(A5);
	billy->executeForm(A6);

	delete billy;
	delete tobby;
	delete bibi;
	return (0);
}
