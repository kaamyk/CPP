/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 09:40:53 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	std::cout << "In ScavTrap default constructor" << std::endl;
	this->_name = "default";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( std::string const name ): ClapTrap( name )
{
	std::cout << "In ScavTrap named " << name << " constructor" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const& source ): ClapTrap( source )
{
	std::cout << "In ScavTrap copy contructor" << std::endl;
	*this = source;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "In ScavTrap destructor" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=( ScavTrap const& source )
{
	this->_name = source._name;
	this->_hitPoint = source._hitPoint;
	this->_energyPoint = source._energyPoint;
	this->_attackDamage = source._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	if (!_hitPoint)
	{
		std::cout << _name << ": is out of energy ... !" << std::endl;
		return ;
	}
	std::cout << "The ScavTrap is now in Gate keeper mode !" << std::endl;
	return ;
}
