/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/23 12:30:58 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class	ClapTrap
{
	protected :
		std::string	_name;
		size_t		_hitPoint;
		size_t		_energyPoint;
		size_t		_attackDamage;

	public :
		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount);
		void	beRepaired( unsigned int amount);
		std::string&	getName( void );
		size_t&		getHitPoint( void );
		size_t&		getEnergyPoint( void );
		size_t&		getAttackDamage( void );


};

#endif