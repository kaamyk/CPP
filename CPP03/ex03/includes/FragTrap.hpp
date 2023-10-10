/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/10 13:26:09 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "../includes/ClapTrap.hpp"

# define FR_HITPOINT 100
# define FR_ENERGYPOINT 100
# define FR_ATTACKDAMAGE 30

class	FragTrap : virtual public ClapTrap
{
	protected :

	public :
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const& source );
		~FragTrap( void );

		FragTrap&	operator=( FragTrap const& src );

		void 		highFivesGuys( void );
};

#endif