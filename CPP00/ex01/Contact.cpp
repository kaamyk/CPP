/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/04 21:50:18 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

//			CONSTRUCTOR && DESTRUCTOR

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}


//			FUNCTIONS TO STORE INPUTS (PUBLIC)

void	Contact::writeInformation(std::string info, size_t lenInfo)
{
	if (lenInfo <= 10)
	{
		for (size_t i = 0; i < 10 - lenInfo; ++i)
			std::cout << " ";
		std::cout << info;
	}
	else
	{
		for (size_t i = 0; i < 9; ++i)
			std::cout << info[i];
		std::cout << ".";
	}
}

void	Contact::displayInformations(size_t index)
{
	std::cout << "\t|" << std::setw(10) << index;
	std::cout << "|";
	writeInformation(this->firstName, this->firstName.length());
	std::cout << "|";
	writeInformation(this->lastName, this->lastName.length());
	std::cout << "|";
	writeInformation(this->nickName, this->nickName.length());
	std::cout << "|" << std::endl;
}

void	Contact::displayAllInformations(void)
{
	std::cout << std::endl << "\tFirst Name : " << firstName << std::endl;
	std::cout << "\tLast Name : " << lastName << std::endl;
	std::cout << "\tNickname : " << nickName << std::endl;
	std::cout << "\tPhone Number : " << phoneNumber << std::endl;
	std::cout << "\tDarkest Secret : " << darkestSecret << std::endl << std::endl;
}


void	Contact::setFirstName(std::string s)
{
	this->firstName = s;
}

void	Contact::setLastName(std::string s)
{
	this->lastName = s;
}

void	Contact::setNickName(std::string s)
{
	this->nickName = s;
}

void	Contact::setPhoneNumber(std::string s)
{
	this->phoneNumber = s;
}

void	Contact::setDarkestSecret(std::string s)
{
	this->darkestSecret = s;
}


//			FUCNTIONS TO CLEAN A UNVALID CONTACT

void	Contact::cleanInputs(void)
{
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}
