/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/18 13:06:18 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	tom("tom", 150);

	std::cout << "First Bureaucrat's name is " << tom.getName() << std::endl;
	std::cout << "First Bureaucrat's grade is " << tom.getGrade() << std::endl;

	std::cout << std::endl;
	std::cout << "Hers comes Elon. Elon has big ambitions ... Maybe too big" << std::endl;
	Bureaucrat	elon("Elon", 0);
	std::cout << "Now, here comes Bob. Nobody knows is name, everybody calls him the Intern" << std::endl;
	Bureaucrat	bob("The intern", 151);

	std::cout << std::endl;
	std::cout << "Elon's grade is " << elon.getGrade() << std::endl;
	return (0);
}
