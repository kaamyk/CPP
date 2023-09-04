/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/04 21:50:27 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

//			CONSTRUCTOR && DESTRUCTOR

PhoneBook::PhoneBook()
{
	index = -1;
	nbContacts = 0;
	stop = false;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}


//			UTILITY FUNCTIONS (PRIVATE)

void	PhoneBook::determineIndex(void)
{
	if (nbContacts < 8)
		++nbContacts;
	++index;
	if (index > 7)
		this->index = 0;
}

bool	PhoneBook::inputParsing(char c, std::string input, size_t *nbUnvalidInputs)
{
	if (c == 'P'
		&& input.empty() == 0
		&& input.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "/!\\ The phone number has to contains only digits /!\\" << std::endl;
		++(*nbUnvalidInputs);
		return (1);
	}
	else if (input.empty() == 1)
	{
		std::cout << "/!\\ Your input needs to be at least one character long /!\\" << std::endl;
		++(*nbUnvalidInputs);
		return (1);
	}
	return (0) ;
}

std::string	PhoneBook::getContactInfo(std::string info)
{
	std::string	inputTmp;
	size_t		nbUnvalidInputs;

	nbUnvalidInputs = 0;
	if (stop == true)
		return ("");
	while (nbUnvalidInputs < 3)
	{
		std::cout << ">>> " << info << " :  " ;
		std::getline(std::cin, inputTmp);
		if (inputParsing(info[0], inputTmp, &nbUnvalidInputs) == 0)
			break ;
	}
	checkTooMuchTries(nbUnvalidInputs);
	return (inputTmp);
}

void	PhoneBook::checkTooMuchTries(size_t nbUnvalidInputs)
{
	if (nbUnvalidInputs == 3)
	{
		stop = true;
		std::cout << "\t\t====== Back to main menu ======" << std::endl;
	}
}

//			COMMAND FUNCTIONS (PUBLIC)

bool	PhoneBook::addContact(void)
{
	std::string	s;

	determineIndex();

	s = getContactInfo("Firstname");
	if (s.empty() == 0)
		this->contactList[index].setFirstName(s);
	s = getContactInfo("Lastname");
	if (s.empty() == 0)
		this->contactList[index].setLastName(s);
	s = getContactInfo("Nickname");
	if (s.empty() == 0)
		this->contactList[index].setNickName(s);
	s = getContactInfo("Phone Number");
	if (s.empty() == 0)
		this->contactList[index].setPhoneNumber(s);
	s = getContactInfo("Darkest Secret");
	if (s.empty() == 0)
		this->contactList[index].setDarkestSecret(s);
	if (stop == true)
	{
		contactList[index].cleanInputs();
		--index;
		--nbContacts;
	}
	stop = false;
	return (0);
}


void	PhoneBook::browseBook(void)
{
	for (size_t i = 0; i < this->nbContacts; i++)
	{
		contactList[i].displayInformations(i + 1);
	}
}

bool	PhoneBook::getSearchInput(std::string input, size_t *nbUnvalidInputs)
{
	int inputNb;

	while (*nbUnvalidInputs < 3)
	{
		std::cout << ">>> Write the index of the contact you want to see :  ";
		getline(std::cin, input);
		if (input.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "\t/!\\ The index must contains only digits. Please retry ... /!\\" << std::endl;
			++(*nbUnvalidInputs);
			continue ;
		}
		inputNb = std::atoi(&input[0]);
		if (inputNb < 1 || inputNb > 8 || (size_t) inputNb > nbContacts)
		{
			std::cout << "\t/!\\ The index must be between 1 and " << nbContacts << " included /!\\" << std::endl;
			++(*nbUnvalidInputs);
			continue ;
		}
		break ;
	}
	return (inputNb);
}

bool	PhoneBook::searchContact(void)
{
	std::string	input;
	size_t		nbUnvalidInputs;
	size_t		indexToSearch;

	std::cout << "\t+----------+----------+----------+----------+" << std::endl
			  << "\t|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
			  << "\t+----------+----------+----------+----------+" << std::endl;
	browseBook();
	nbUnvalidInputs = 0;
	indexToSearch = getSearchInput(input, &nbUnvalidInputs);
	if (nbUnvalidInputs == 3)
	{
		checkTooMuchTries(nbUnvalidInputs);
		return (1);
	}
	contactList[indexToSearch].displayAllInformations();
	return (0);
}

bool	PhoneBook::exitPhoneBook(void)
{
	std::cout << "In function exitPhoneBook()" << std::endl;
	return (0);
}

//			FUNCTION TO GET AN INPUT (PUBLIC)

