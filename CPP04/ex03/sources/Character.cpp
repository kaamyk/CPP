/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 18:26:39 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const name ): ICharacter("_name")
{
	std::cout << "In Character default constructor" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
		_stuff[i] = NULL;
	return ;
}

Character::~Character( void )
{
	return ;
}

std::string const&	getName( void ) const
{
	return (this->_name);
}

void				equip( AMateria* m )
{
	for (unsigned int i = 0; i < 4 && _stuff[i] != NULL; ++i)
		;
	if (i == 4)
		return ;
	_stuff[i] = m;
	return ;
}

void				unequip( int idx )
{
	if ((idx < 0 || idx > 4) || _stuff[idx] = NULL)
		return ;
	// False => delete inside the function forbidden
	delete _stuff[idx];
	_stuff[idx] = NULL;
}

void				use( int idx, ICharacter& target )
{
	if ((idx < 0 || idx > 4) || _stuff[idx] = NULL)
		return ;
	_stuff[idx]->use(target);
	return ;
}
