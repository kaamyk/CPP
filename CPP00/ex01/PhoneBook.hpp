/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/09/01 17:16:36 by anvincen         ###   ########.fr       */
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

		bool	addContact(size_t nbContact);
		bool	searchContact(void);
		bool	exitPhoneBook(void);

	private :

		Contact	contactList[8];
		size_t	index;
		size_t	nbContact;
};

#endif
