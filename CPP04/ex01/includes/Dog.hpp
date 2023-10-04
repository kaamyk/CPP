/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 10:51:31 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private	:
		Brain*	_brain;

	public	:
		Dog( void );
		Dog(Dog const & src);
		~Dog( void );

		Dog&	operator=( Dog const& source );

		void	makeSound( void ) const;
		void	setIdea(unsigned int const r, std::string const newIdea);
		void	printIdea(unsigned int const r) const;
};

#endif
