/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/06 21:21:31 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A__H
# define HUMAN_A__H

#include "Weapon.hpp"

class	HumanB
{
	private :
		Weapon		_weapon;
		std::string	_name;

	public :
		HumanB();
		HumanB(std::string name, Weapon weapon);
		~HumanB();
		void	attack(void);
};

#endif
