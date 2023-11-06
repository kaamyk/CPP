/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/11/06 09:37:17 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main(void)
{
	{
		std::cout << "\t---- Constructor Tests ----" << std::endl;
		Form*	A38 = new Form();
		Form*	A39 = new Form("bibi", 50, 20);
		Form*	A40 = new Form("toto", 30, 60);
		Form*	A41 = new Form(*A39);
		Form	A42;
	
		A42 = *A40;
	
		std::cout << "A38: " << *A38 << std::endl;
		std::cout << "A39: " << *A39 << std::endl;
		std::cout << "A40: " << *A40 << std::endl;
		std::cout << "A41: " << *A41 << std::endl;
		std::cout << "A42: " << A42 << std::endl;
	
		std::cout << "\t==================" << std::endl;
		delete A38;
		delete A39;
		delete A40;
		delete A41;
		std::cout << "\t- End of Constructor Tests - " << std::endl;
	}
	{
		std::cout << "\t---- Exception Tests ----" << std::endl;
		Form*	A1 = new Form();
		Form*	A2 = new Form("riri", 678, 20);
		Form*	A3 = new Form("fifi", 5, 0);
		Form*	A4 = new Form("loulou", 5, 6);

		(void) A1;
		(void) A2;
		(void) A3;
		(void) A4;

		delete A1;
		delete A2;
		delete A3;
		delete A4;
		std::cout << std::endl;
		std::cout << "\t---------------------" << std::endl;
	}
	{
		std::cout << std::endl;
		Bureaucrat* tobby = new Bureaucrat("tobby", 150);
		Bureaucrat*	bobby = new Bureaucrat("bobby", 56);
		Bureaucrat*	tommy = new Bureaucrat("tommy", 4);

		Form*	A1 = new Form("A1", 150, 150);
		Form*	A2 = new Form("A2", 150, 60);
		Form*	A3 = new Form("A3", 150, 1);
		std::cout << std::endl;

		std::cout << "All signature should work" << std::endl;
		tommy->signForm(*A1);
		bobby->signForm(*A1);
		tobby->signForm(*A1);
		// std::cout << "A1 signed = " << A1->getIfSigned() << std::endl;
		std::cout << std::endl;
		std::cout << "Should work for the two first" << std::endl;
		tommy->signForm(*A2);
		bobby->signForm(*A2);
		tobby->signForm(*A2);
		// std::cout << "A2 signed = " << A2->getIfSigned() << std::endl;
		std::cout << std::endl;
		std::cout << "Should work for none" << std::endl;
		tommy->signForm(*A3);
		bobby->signForm(*A3);
		tobby->signForm(*A3);
		std::cout << "A3 signed = " << A3->getIfSigned() << std::endl;
		std::cout << "\t\t - End of Exception Tests - " << std::endl;
		std::cout << std::endl;

		delete tobby;
		delete bobby;
		delete tommy;
		delete A1;
		delete A2;
		delete A3;
	}
	return (0);
}
