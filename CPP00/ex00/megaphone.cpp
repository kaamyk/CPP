/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/08/01 14:11:59 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Output
{
	public :

	void	capitalize_char(char *c)
	{
		*c = std::toupper(*c);
	}

	void	print_loud_noise(void)	
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
};

int	main(int argc, char **argv)
{
	Output		message;

	if (argc == 1)
		message.print_loud_noise();
	else
	{
		for (size_t i = 1; argv[i]; i++)
		{
			std::string	s(argv[i]);
			for (std::string::iterator it = s.begin(); it != s.end(); it++)
				message.capitalize_char(it);
			std::cout << s;
		}
		std::cout << std::endl;
	}
	return (0);
}