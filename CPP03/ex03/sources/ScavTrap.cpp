/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/09 19:07:14 by antoine          ###   ########.fr       */
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
	std::cout << "In ScavTrap named constructor" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const& source ): ClapTrap( source )
{
	std::cout << "In ScavTrap copy contructor" << std::endl;
	this->_name = source._name;
	this->_hitPoint = source._hitPoint;
	this->_energyPoint = source._energyPoint;
	this->_attackDamage = source._attackDamage;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "In ScavTrap destructor" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=( ScavTrap const& source )
{
	*this = source;
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	std::cout << "The ScavTrap is now in Gate keeper mode !" << std::endl;
	return ;
}
