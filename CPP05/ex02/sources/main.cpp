/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/23 18:01:45 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "../includes/ShrubberyCreationForm.hpp"

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
	
	std::cout << *A1 << std::endl;
	std::cout << *A2 << std::endl;

	A1->beExecuted(*billy);
	A2->beExecuted(*tobby);
	return (0);
}
