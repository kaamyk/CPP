/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/09 19:24:27 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ScavTrap(), FragTrap()
{
	std::cout << "In DiamondTrap default constructor" << std::endl;
	this->_name = "default";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	return ;
}

DiamondTrap::DiamondTrap( std::string const name ): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "In DiamondTrap named constructor" << std::endl;
	this->_name = name;
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const& source ): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "In DiamondTrap copy contructor" << std::endl;
	*this = source;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "In DiamondTrap destructor" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=( DiamondTrap const& source )
{
	this->_name = source._name;
	this->_hitPoint = source._hitPoint;
	this->_energyPoint = source._energyPoint;
	this->_attackDamage = source._attackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "The DiamondTrap" << std::endl;
	return ;
}