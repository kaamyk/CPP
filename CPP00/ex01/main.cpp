/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/25 11:09:56 by antoine          ###   ########.fr       */
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

	beg = input.find_first_not_of(whiteSpc);
	end = input.find_last_not_of(whiteSpc);
	if (beg == end)
		return (input);
	cleanStr =  input.substr(beg, end - beg + 1);
	return (cleanStr);
}

std::string	getCommand(void)
{
	std::string	input;

	std::getline(std::cin, input);
	input = delWhiteSpaces(input);
	return (input);
}

int	main(void)
{
	PhoneBook	book;
	std::string	input;

	std::cout << "\n\n\n\t\t---------//\\ MY AWESOME PHONE BOOK /\\\\---------\n\n" << std::endl;
	while (1)
	{
		std::cout << "Enter Input : ";
		input = getCommand();
		if (input.length() == 0 || input == "EXIT")
			if (book.exitPhoneBook() == 0)
				break ;
		std::cout << std::endl;
		if (input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.searchContact();
		else
			std::cout << "\t>>> Invalid input ! Please type your command. <<<" << std::endl;
	}
	return (0);
}
