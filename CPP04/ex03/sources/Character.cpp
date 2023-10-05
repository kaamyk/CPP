/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/05 18:27:48 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ): _type("No name")
{
	std::cout << "In Character default constructor" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	return;
}

Character::Character( Character const& source )
{
	if (this != &source)
		*this = source;
	return (*this);
}

Character::Character( std::string const name )
{
	std::cout << "In Character parametered constructor" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	return ;
}

Character::~Character( void )
{
	std::cout << "In Character destructor" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			delete _iventory[i];
	}
	return ;
}

Character&			Character::operator=( Character const& source )
{
	this->_name = source.name;
	this->resetInventory(void);
	for (unsigned int i = 0; i < 4; ++i)
		*(this->_stuff[i]) = *(source._inventory[i]);
	return (*this);
}

std::string const&	Character::getName( void ) const
{
	return (this->_name);
}

void				Character::equip( AMateria* m )
{
	for (unsigned int i = 0; i < 4 && _inventory[i] != NULL; ++i)
		;
	if (i == 4)
		return ;
	_inventory[i] = m;
	return ;
}

void				Character::unequip( int idx )
{
	if ((idx < 0 || idx > 4) || _inventory[idx] = NULL)
		return ;
	// False => delete inside the function forbidden
	delete _inventory[idx];
	_inventory[idx] = NULL;
}

void				Character::use( int idx, ICharacter& target )
{
	if ((idx < 0 || idx > 4) || !_inventory[idx])
		return ;
	_inventorytuff[idx]->use(target);
	return ;
}

void				Character::resetInventory( void )
{
	for (unsigned int i = 0; i < 4; ++i)
	{
		delete(_inventory[i]);
		_inventory[i] = NULL;
	}
	return ;
}
