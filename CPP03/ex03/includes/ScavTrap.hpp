/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/09 14:51:22 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "../includes/ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	protected :
		
	public :
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const& source );
		~ScavTrap( void );

		ScavTrap&	operator=( ScavTrap const& src );

		void guardGate( void );
};

#endif
