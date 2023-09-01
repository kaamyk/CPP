/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/09/01 17:17:01 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

//			CONSTRUCTOR && DESTRUCTOR

PhoneBook::PhoneBook(void)
{
	std::cout << "In the PhoneBook's constructor" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "In the PhoneBook's destructor" << std::endl;
	return ;
}


//			UTILITY FUNCTIONS

void	PhoneBook::determineIndex(void)
{
	if (this->nbContact == 8)
		this->index = 0;
	else
		this->index = this->nbContact - 1;
}

void	parseBook(void)
{
	for (size_t i = 0; i < this->nbContact; i++)
	{
		Contact.printInformations(i);
	}
}

//			COMMAND FUNCTIONS

//	ADD

bool	PhoneBook::addContact(size_t nbContact)
{
	std::string	s;

	this->incrementIndex();

	std::cout << "In function addContact()" << std::endl;
	std::cout << "Firstname :";
	std::getline(std::cin, s);
	this->contactList[0].setFirstName(s);

	std::cout << "Lastname :";
	std::getline(std::cin, s);
	this->contactList[0].setLastName(s);

	std::cout << "Nickname :";
	std::getline(std::cin, s);
	this->contactList[0].setNickName(s);

	std::cout << "Phone Number :";
	std::getline(std::cin, s);
	this->contactList[0].setPhoneNumber(s);

	std::cout << "Darkest Secret :";
	std::getline(std::cin, s);
	this->contactList[0].setDarkestSecret(s);

	this->contactList[0].printInformations(0);
	return (0);
}

//	SEARCH

bool	PhoneBook::searchContact(void)
{
	std::cout << "In function searchContact()" << std::endl;
	return (0);
}

//	EXIT

bool	PhoneBook::exitPhoneBook(void)
{
	std::cout << "In function exitPhoneBook()" << std::endl;
	return (0);
}

//			FUNCTION TO GET AN INPUT (PUBLIC)

