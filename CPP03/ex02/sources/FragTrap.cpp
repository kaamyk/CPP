/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 09:46:40 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	std::cout << "In FragTrap default constructor" << std::endl;
	this->_name = "default";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap( std::string const name ): ClapTrap( name )
{
	std::cout << "In FragTrap named " << name << " constructor" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap( FragTrap const& source ): ClapTrap( source )
{
	std::cout << "In FragTrap copy contructor" << std::endl;
	*this = source;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "In FragTrap destructor" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=( FragTrap const& source )
{
	this->_name = source._name;
	this->_hitPoint = source._hitPoint;
	this->_energyPoint = source._energyPoint;
	this->_attackDamage = source._attackDamage;
	return (*this);
}

void		FragTrap::highFivesGuys( void )
{
	if (!_hitPoint)
	{
		std::cout << _name << " cannot high five ... sniff... it is out of hit points !" << std::endl;
		return ;
	}
	std::cout << _name << " shouts : HIGH FIVE GUYS !" << std::endl;
	return ;
}
