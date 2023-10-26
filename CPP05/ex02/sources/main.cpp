/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/26 12:17:11 by antoine          ###   ########.fr       */
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
	Bureaucrat*	tobby = new Bureaucrat(name, 56);
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

	tobby->signForm(A1);
	tobby->signForm(A2);
	tobby->signForm(A3);
	tobby->signForm(A4);
	tobby->signForm(A5);
	tobby->signForm(A6);
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
