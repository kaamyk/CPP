/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/19 17:09:27 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main(void)
{
	{
		std::cout << "\t---- Constructor Tests ----" << std::endl;
		Form*	A38 = new Form();
		Form*	A39 = new Form("bibi", 50, 20, 0);
		Form*	A40 = new Form("toto", 30, 60, 1);
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
		std::cout << "\t\t - End of Constructor Tests - " << std::endl;
	}
	{
		std::cout << "\t---- Exception Tests ----" << std::endl;
		Form*	A1 = new Form();
		Form*	A2 = new Form("riri", 678, 20, 0);
		Form*	A3 = new Form("fifi", 5, 0, 1);
		Form*	A4 = new Form("loulou", 5, 6, 1);

		(void) A1;
		(void) A2;
		(void) A3;
		(void) A4;

		delete A1;
		delete A2;
		delete A3;
		delete A4;
		std::cout << "\t\t - End of Exception Tests - " << std::endl;
	}
	return (0);
}
