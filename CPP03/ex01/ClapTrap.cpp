/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/23 12:35:09 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitPoint(10),
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

ClapTrap::~ClapTrap( void )
{
	std::cout << "In ClapTrap destructor" << std::endl;
	return ;
}

std::string&	ClapTrap::getName( void )
{
	return ( this->_name );
}

size_t&			ClapTrap::getHitPoint( void )
{
	return ( this->_hitPoint );
}

size_t&		ClapTrap::getEnergyPoint( void )
{
	return ( this->_energyPoint ); 
}

size_t&			ClapTrap::getAttackDamage( void )
{
	return (this->_attackDamage);
}

void			ClapTrap::attack( const std::string& target )
{
	std::cout << "ClapTrap " << this->_name
	<< "attacks " << target
	<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void			ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << this->_name
	<< " takes damage from ClapTrap ! Oh my god ! " << amount
	<< " points of damage ?! Ouch ..." << std::endl;
	this->_energyPoint = this->_energyPoint - amount;
	std::cout << this->_energyPoint << " energy points left !" << std::endl;
	return ;
}

void			ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "That was a lot for " << this->_name
	<< " ! Let's give him a bit of rest ... " << amount
	<< " life points to him !" << std::endl;
	return ;
}
