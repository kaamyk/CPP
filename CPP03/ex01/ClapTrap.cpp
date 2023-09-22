/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/15 14:31:46 by antoine          ###   ########.fr       */
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

void	ClapTrap::attack( const std::string& target )
{
	std::cout << "ClapTrap " << this->_name
	<< "attacks " << target
	<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << this->_name
	<< " takes damage from ClapTrap ! Oh my god ! " << amount
	<< " points of damage ?! Ouch ..." << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "That was a lot for " << this->_name
	<< " ! Let's give him a bit of rest ... " << amount
	<< " life points to him !" << std::endl;
	return ;
}
