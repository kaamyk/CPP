/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 09:41:39 by anvincen         ###   ########.fr       */
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
		ClapTrap( ClapTrap const& source );
		ClapTrap( std::string name );
		~ClapTrap( void );

		ClapTrap&	operator=( ClapTrap const& source );

		void			printAttributes( void );
		void			attack( const std::string& target );
		void			takeDamage( unsigned int amount);
		void			beRepaired( unsigned int amount);

		unsigned int	getAttackDamage( void );
		void			setAttackDamage( unsigned int ad );
};

#endif