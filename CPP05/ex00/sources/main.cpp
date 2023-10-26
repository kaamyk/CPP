/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/26 11:27:54 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat*	tom = NULL;
	try{
		tom = new Bureaucrat("tom", 150);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << *tom << std::endl;

	delete tom;

	std::cout << std::endl;
	std::cout << "Hers comes Elon. Elon has big ambitions ... Maybe too big" << std::endl;
	Bureaucrat*	elon = NULL;
	try{
		elon = new Bureaucrat("Elon", 0);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Now, here comes Bob. Nobody knows is name, everybody calls him the Intern" << std::endl;
	Bureaucrat	*bob;
	try{
		bob = new Bureaucrat("The intern", 151);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	delete(elon);
	delete(bob);
	std::cout << "==============================" << std::endl;
	Bureaucrat tommy("Tommy", 54);
	try{
		tommy.incrementGrade();
		std::cout << tommy << std::endl;
		tommy.incrementGrade();
		std::cout << tommy << std::endl;
		tommy.incrementGrade();
		std::cout << tommy << std::endl;
		tommy.decrementGrade();
		std::cout << tommy << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "Let's make Tommy the companie's CEO !" << std::endl;
	tommy.setGrade(1);
	std::cout << "Let's try to promote him again :" << std::endl;
	try{
		tommy.incrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
