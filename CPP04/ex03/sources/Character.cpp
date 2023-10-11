/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 14:51:41 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character( void ): _name("No name")
{
	std::cout << "In Character default constructor" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	return;
}

Character::Character( Character const& source )
{
	std::cout << "In Character copy destructor" << std::endl;
	*this = source;
	return ;
}

Character::Character( std::string const name ): _name(name)
{
	std::cout << "In Character named " << name << " constructor" << std::endl;
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
			delete _inventory[i];
	}
	// delete [] _inventory;
	return ;
}

Character&			Character::operator=( Character const& source )
{
	if (this != &source)
	{
		this->_name = source._name;
		resetInventory();
		for (unsigned int i = 0; i < 4; ++i)
			*(this->_inventory[i]) = *(source._inventory[i]);
	}
	return (*this);
}

void				Character::printInventory( void )
{
	std::cout << _name << " :" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			std::cout << "\tInventory[" << i << "] == " << _inventory[i]->getType() << std::endl;
	}
	return ;
}

std::string const&	Character::getName( void ) const
{
	return (this->_name);
}

void				Character::equip( AMateria* m )
{
	unsigned int i = 0;
	for (i = 0; i < 4 && _inventory[i] != NULL; ++i)
		;
	if (i == 4)
		return ;
	_inventory[i] = m;
	return ;
}

void				Character::unequip( int idx )
{
	if ((idx < 0 || idx > 4) || (_inventory[idx] = NULL))
		return ;
	_inventory[idx] = NULL;
}

void				Character::use( int idx, ICharacter& target )
{
	if ((idx < 0 || idx > 4) || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
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
