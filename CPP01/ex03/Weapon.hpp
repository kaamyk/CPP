/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 17:07:04 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Weapon
{
	private :
		std::string	_type;

	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string const	&getType(void);
		void				setType( std::string );
};
