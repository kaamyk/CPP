/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/09/01 17:16:26 by anvincen         ###   ########.fr       */
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
	void	printInformations(size_t index);

	private :

	
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;	
	std::string	darkestSecret;
};

#endif
