/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/28 17:34:02 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Harl
{
	private :
		size_t		_minimumLevel;
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );

	public :
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
		void	setMinimumLevel(std::string arg);
};
