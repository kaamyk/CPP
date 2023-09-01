/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/09/01 17:16:35 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//			CONSTRUCTOR && DESTRUCTOR

Contact::Contact(void)
{
	std::cout << "In the Contact's constructor" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "In the Contact's destructor" << std::endl;
}


//			FUNCTIONS TO STORE INPUTS (PUBLIC)

void	Contact::printInformations(size_t index)
{
	(void)index;
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickName << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->darkestSecret << std::endl;
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

