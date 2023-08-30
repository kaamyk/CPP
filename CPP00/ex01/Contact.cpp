/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/08/30 19:27:54 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::string	tmp;

	std::cout << "First name : ";
	getline(std::cin, tmp);
	std::cout << "Your input is : " << tmp << std::endl;
	first_name = tmp;
	std::cout << first_name << std::endl;

	std::cout << "Last name : ";
	getline(std::cin, tmp);
	// std::cin >> tmp;
	std::cout << "Your input is : " << tmp << std::endl;
	last_name = tmp;
	std::cout << last_name << std::endl;

	std::cout << "Nickname : ";
	getline(std::cin, tmp);
	// std::cin >> tmp;
	std::cout << "Your input is : " << tmp << std::endl;
	nickname = tmp;
	std::cout << nickname << std::endl;

	std::cout << "Phone number : ";
	getline(std::cin, tmp);
	// std::cin >> tmp;
	std::cout << "Your input is : " << tmp << std::endl;
	phone_number = tmp;
	std::cout << phone_number << std::endl;

	std::cout << "Darkest secret : ";
	getline(std::cin, tmp);
	// std::cin >> tmp;
	std::cout << "Your input is : " << tmp << std::endl;
	darkest_secret = tmp;
	std::cout << darkest_secret << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "In destructor" << std::endl;
}
