/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/04 21:41:33 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	public :

		Contact();
		~Contact();

		void	setFirstName(std::string s);
		void	setLastName(std::string s);
		void	setNickName(std::string s);
		void	setPhoneNumber(std::string s);
		void	setDarkestSecret(std::string s);
		void	displayInformations(size_t index);
		void	displayAllInformations(void);
		void	writeInformation(std::string info, size_t lenInfo);
		void	cleanInputs(void);

	private :

		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;	
		std::string	darkestSecret;
	};

#endif
