/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 12:03:07 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	AMAteria
{
	protected	:
		std::string const	_type;
	public		:
		AMAteria( void );
		AMateria( const std::string& source );
		~AMateria( void );

		std::string const&	getType( void ) const;
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target );
};
