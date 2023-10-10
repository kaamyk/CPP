/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 13:23:48 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "../includes/ScavTrap.hpp"
# include "../includes/FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap 
{
	private :
		std::string		_name;

	public :
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const& source );
		~DiamondTrap( void );

		DiamondTrap&	operator=( DiamondTrap const& src );

		void whoAmI( void );
};

#endif