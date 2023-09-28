/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 14:47:52 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string const	s = "HI THIS IS BRAIN";
	std::string const	*stringPTR = &s;
	std::string const	&stringREF = s;

	std::cout << "string address is " << &s <<std::endl;
	std::cout << "address in stringPTR is " << stringPTR << std::endl;
	std::cout << "address in stringREF is " << &stringREF << std::endl << std::endl;
	std::cout << "string value is " << s <<std::endl;
	std::cout << "value in stringPTR is " << *stringPTR << std::endl;
	std::cout << "value in stringREF is " << stringREF << std::endl;
	std::cout << "\n\tWell, that's all folks !\n" << std::endl;
}
