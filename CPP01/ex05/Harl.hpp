/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 18:25:05 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Harl
{
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public :
		Harl( void );
		~Harl( void );
		
		void	complain( std::string level );
};
