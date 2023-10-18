/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/18 16:13:20 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character( void ): _name("Anonymous")
{
	std::cout << "In Character default constructor" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	return;
}

Character::Character( Character const& source )
{
	std::cout << "In Character copy constructor" << std::endl;
	initializeInventory();
	*this = source;
	return ;
}

Character::Character( std::string const name ): _name(name)
{
	std::cout << "In Character named " << name << " constructor" << std::endl;
	initializeInventory();
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
		initializeInventory();
		for (unsigned int i = 0; i < 4; ++i)
		{
			if (source._inventory[i])
				this->_inventory[i] = source._inventory[i]->clone();
		}
	}
	return (*this);
}

void				Character::printInventory( void )
{
	std::cout << _name << " :" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
	{
		if (_inventory && _inventory[i])
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
	{
		delete m;
		std::cout <<  _name << " 's inventory is already full" << std::endl;
		return ;
	}
	_inventory[i] = m;
	std::cout << "New Materia equiped in " << _name << " inventory at rank " << i << std::endl;
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
	if ((idx < 0 || idx > 3) || !_inventory[idx])
		return ;
	if (_inventory[idx])
		_inventory[idx]->use(target);
	return ;
}

void				Character::initializeInventory( void )
{
	for (unsigned int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	return ;
}

void				Character::resetInventory( void )
{
	for (unsigned int i = 0; i < 4; ++i)
	{
		if (_inventory && _inventory[i])
		{
			delete(_inventory[i]);
			_inventory[i] = NULL;
		}
	}
	return ;
}
