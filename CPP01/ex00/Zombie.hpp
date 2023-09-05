/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/05 19:16:29 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Zombie
{
	private	:
		std::string		name;
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);

	public	:
		Zombie(void);
		~Zombie(void);
		void enter_selection();
};
