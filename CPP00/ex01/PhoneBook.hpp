/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/09/19 11:22:48 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	public :

		PhoneBook();
		~PhoneBook();

		//	COMMAND FUNCTION
		bool	addContact(void);
		bool	searchContact(void);
		bool	exitPhoneBook(void);


	private :

		Contact	contactList[8];
		int		index;
		size_t	nbContacts;
		bool	stop;

		//	UTILS
		void		determineIndex(void);
		void		browseBook(void);
		bool		inputParsing(char c, std::string input, size_t &n);
		std::string	getContactInfo(std::string info);
		void		checkTooMuchTries(size_t &nbUnvalidInputs);
		bool		getSearchInput(std::string input, size_t &nbUnvalidInputs);
};

#endif
