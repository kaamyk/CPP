/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 11:27:47 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal
{
	protected :
		std::string	_type;

	public :
		AAnimal( void );
		AAnimal( std::string const type );
		// AAnimal( Animal const& source );
		virtual ~AAnimal( void );

		AAnimal&		operator=( AAnimal const& source);

		virtual void		makeSound( void ) const = 0;
		// std::string const&	getType( void ) const = 0;
};

#endif
