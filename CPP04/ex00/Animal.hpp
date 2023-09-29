/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/29 20:03:10 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected :
		std::string	_type;

	public :
		Animal( void );
		Animal( std::string const type );
		Animal( Animal const& source );
		~Animal( void );

		Animal&		operator=( Animal const& source);

		void				makeSound( void ) const;
		std::string const&	getType( void ) const;
};

#endif
