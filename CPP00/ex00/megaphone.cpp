/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by xuluu             #+#    #+#             */
/*   Updated: 2023/07/28 16:46:45 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Output
{
	public :

	void	capitalize_char(char c)
	{
		if (c == '"')
			return ;
		if (c >= 'a' && c <= 'z')
			c = c - ('a' - 'A');
		std::cout << c;
	}

	void	print_loud_noise(void)	
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
};

int	main(int argc, char **argv)
{
	Output	message;
	size_t	i;
	size_t	j;

	if (argc <= 1)
		message.print_loud_noise();
	else
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				message.capitalize_char(argv[i][j]);
				++j;
			}
			++i;
		}
	}
	std::cout << ("\n");
	return (0);
}