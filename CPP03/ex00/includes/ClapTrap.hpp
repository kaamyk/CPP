/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/08 11:27:33 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class	ClapTrap
{
	private :
		std::string	_name;
		size_t		_hitPoint;
		size_t		_energyPoint;
		size_t		_attackDamage;

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