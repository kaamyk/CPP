/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/09/01 17:13:30 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	delWhiteSpaces(std::string input)
{
	std::string cleanStr;
	std::string	whiteSpc = " \t\n\r\v\f";
	size_t	beg;
	size_t	end;

	std::cout << "In delWhiteSpaces => input == [" << input << "]" << std::endl;
	beg = input.find_first_not_of(whiteSpc);
	end = input.find_last_not_of(whiteSpc);
	if (beg == end)
		return (input);
	cleanStr =  input.substr(beg, end - beg + 1);
	std::cout << "\tcleanStr == [" << cleanStr << "]" << std::endl;
	return (cleanStr);
}

std::string	getCommand(void)
{
	std::string	input;

	std::getline(std::cin, input);
	input = delWhiteSpaces(input);
	std::cout << "After delWhiteSpaces => input == [" << input << "]" << std::endl;
	return (input);
}

int	main(void)
{
	PhoneBook	book;
	std::string	input;

	std::cout << "In main() => before the loop" << std::endl;
	while (1)
	{
		std::cout << "Enter Input : ";
		input = getCommand();
		// std::getline(std::cin, input);
		std::cout << std::endl;
		std::cout << ">>> You typed : " << input << " <<<" << std::endl;
		if (input == "ADD")
		{
			std::cout << "In ADD" << std::endl;
			book.addContact(book.nbContact);
		}
		else if (input == "SEARCH")
		{
			std::cout << "In SEARCH" << std::endl;
			book.searchContact();
		}
		else if (input == "EXIT")
		{
			std::cout << "In EXIT" << std::endl;
			if (book.exitPhoneBook() == 0)
				break ;
		}
		else
			std::cout << "Invalid input ! Please type your command." << std::endl;
	}
	return (0);
}