/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/09 18:32:04 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "../includes/ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	protected :
		
	public :
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const& source );
		~FragTrap( void );

		FragTrap&	operator=( FragTrap const& src );

		void highFivesGuys( void );
};

#endif