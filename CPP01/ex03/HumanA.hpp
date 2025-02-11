/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 16:32:31 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A__H
# define HUMAN_A__H

# include "Weapon.hpp"

class	HumanA
{
	private :
		Weapon		&_weapon;
		std::string	_name;

	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		
		void	attack(void);
};

#endif
