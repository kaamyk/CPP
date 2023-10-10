/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 12:30:45 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "../includes/ClapTrap.hpp"

# define SC_HITPOINT 100
# define SC_ENERGYPOINT 50
# define SC_ATTACKDAMAGE 20

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
