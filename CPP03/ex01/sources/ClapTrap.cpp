/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 17:58:05 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ):	_name("default"), _hitPoint(10),
							_energyPoint(10), _attackDamage(0)
{
	std::cout << "In ClapTrap default constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoint(10),
										_energyPoint(10), _attackDamage(0)
{
	std::cout << "In ClapTrap named constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const& source)
{
	std::cout << "In ClapTrap copy constructor" << std::endl;
	*this = source;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "In ClapTrap destructor" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const& source )
{
	_name = source._name;
	_hitPoint = source._hitPoint;
	_energyPoint = source._energyPoint;
	_attackDamage = source._attackDamage;
	return (*this);
}

void			ClapTrap::printAttributes( void )
{
	std::cout << _name <<  "attributes:" << std::endl
	<< "\tHit Point: " << _hitPoint << std::endl
	<< "\tEnergy Point: " << _energyPoint << std::endl
	<< "\tAttack Damage: " << _attackDamage << std::endl;
	return ;
}

void			ClapTrap::attack( const std::string& target )
{
	if (!_energyPoint || !_hitPoint)
	{
		if (!_energyPoint)
			std::cout << _name << ": is out of energy ... It cannot attack !" << std::endl;
		else if (!_hitPoint)
			std::cout << _name << ": id out of hit points ... It cannot attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name
	<< " attacks " << target
	<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	--this->_energyPoint;
	return ;
}

void			ClapTrap::takeDamage( unsigned int amount )
{
	if (!_hitPoint)
	{
		std::cout << _name << ": has no more hit points ... RIP ... " << std::endl;
		return ;
	}
	std::cout << this->_name
	<< " takes damage ! " << amount
	<< " points of damage ?! Ouch ..." << std::endl;
	if (!_hitPoint)
		return ;
	else if (_hitPoint <= amount)
		_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	return ;
}

void			ClapTrap::beRepaired( unsigned int amount )
{
	if (!_energyPoint || !_hitPoint)
	{
 		if (!_energyPoint)
			std::cout << _name << ": is out of energy ... It cannot be repaired !" << std::endl;
		else if (!_hitPoint)
			std::cout << _name << ": is out of hit points ... It cannot be repaired !" << std::endl;
		return ;
	}
	std::cout << "That was a lot for " << this->_name
	<< " ! Let's give him a bit of rest ... " << amount
	<< " life points to him !" << std::endl;
	this->_energyPoint -= 1;
	this->_hitPoint += amount;
	return ;
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return ( _attackDamage );
}

void			ClapTrap::setAttackDamage( const unsigned int & ad )
{
	_attackDamage = ad;
	return ;
}
