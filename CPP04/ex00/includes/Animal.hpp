/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 10:01:10 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected :
		std::string		_type;

	public :
		Animal( void );
		Animal( std::string const type );
		Animal( Animal const& source );
		virtual ~Animal( void );

		Animal&				operator=( Animal const& source);

		virtual void		makeSound( void ) const;
		std::string const&	getType( void ) const;
};

#endif
