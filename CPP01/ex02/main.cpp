/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 16:45:09 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string const	s = "HI THIS IS BRAIN";
	std::string const	*stringPTR = &s;
	std::string const	&stringREF = s;

	std::cout << "string address is " << &s <<std::endl;
	std::cout << "stringPTR address is " << stringPTR <<std::endl;
	std::cout << "stringREF address is " << &stringREF <<std::endl;
	std::cout << "string value is " << s <<std::endl;
	std::cout << "stringPTR value is " << *stringPTR <<std::endl;
	std::cout << "stringREF value is " << stringREF <<std::endl;
	std::cout << "\n\tWell, that's all folks !\n" << std::endl;
}
