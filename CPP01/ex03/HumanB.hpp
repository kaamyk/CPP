/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 16:32:27 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_B__H
# define HUMAN_B__H

#include "Weapon.hpp"

class	HumanB
{
	private :
		Weapon		*_weapon;
		std::string	_name;

	public :
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
