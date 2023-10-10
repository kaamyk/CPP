/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 13:25:21 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ScavTrap(), FragTrap() 
{
	std::cout << "In DiamondTrap default constructor" << std::endl;
	ScavTrap	tmp;

	this->_name = "default";
	this->_hitPoint = FragTrap::getHitPoint();
	this->_energyPoint = tmp.getEnergyPoint();
	this->_attackDamage = FragTrap::getAttackDamage();
	return ;
}

DiamondTrap::DiamondTrap( std::string const name ): ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "In DiamondTrap named constructor" << std::endl;
	ScavTrap	tmp;

	this->_name = name;
	this->_hitPoint = FragTrap::getHitPoint();
	this->_energyPoint = tmp.getEnergyPoint();
	this->_attackDamage = FragTrap::getAttackDamage();
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
	if (this != &source)
	{
		this->_name = source._name;
		this->_hitPoint = source._hitPoint;
		this->_energyPoint = source._energyPoint;
		this->_attackDamage = source._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "The DiamondTrap" << std::endl;
	return ;
}