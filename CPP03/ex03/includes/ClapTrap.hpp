/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/09 18:32:48 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class	ClapTrap
{
	protected :
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;

	public :
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const& source );
		~ClapTrap( void );


		ClapTrap&		operator=( ClapTrap const& source );

		std::string		getName( void ) const;
		unsigned int	getHitPoint( void ) const;
		unsigned int	getEnergyPoint( void ) const;
		unsigned int	getAttackDamage( void ) const;
		void			setAttackDamage( const unsigned int& ad);
		
		void			printAttributes( void );
		void			attack( const std::string& target );
		void			takeDamage( unsigned int amount);
		void			beRepaired( unsigned int amount);


};

#endif