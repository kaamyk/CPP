/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/24 17:56:58 by anvincen         ###   ########.fr       */
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

	(void) tobby;
	AForm*	A1 = new ShrubberryCreationForm();
	AForm*	A2 = new ShrubberryCreationForm("A2");
	AForm*	A3 = new RobotmyRequestForm();
	AForm*	A4 = new RobotmyRequestForm("A4");
	AForm*	A5 = new PresidentialPardonForm();
	AForm*	A6 = new PresidentialPardonForm("A6");
	
	std::cout << *A1 << std::endl;
	std::cout << *A2 << std::endl;
	std::cout << *A3 << std::endl;
	std::cout << *A4 << std::endl;

	billy->signForm(A1);
	billy->signForm(A2);
	billy->signForm(A3);
	billy->signForm(A4);
	billy->signForm(A5);
	billy->signForm(A6);
	try{
		A1->beExecuted(*billy);
		A2->beExecuted(*tobby);
		A3->beExecuted(*billy);
		A4->beExecuted(*tobby);
		A5->beExecuted(*tobby);
		A6->beExecuted(*billy);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	delete billy;
	delete tobby;
	return (0);
}
