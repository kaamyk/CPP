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
		ClapTrap( std::string name );
		~ClapTrap( void );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount);
		void	beRepaired( unsigned int amount);
};

#endif