/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 10:52:08 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
{
	private	:
		Brain*	_brain;

	public	:
		Cat( void );
		Cat(Cat const & src);
		~Cat( void );

		Cat&	operator=( Cat const& source );

		void	makeSound( void ) const;
		void	setIdea(unsigned int const r, std::string const newIdea);
		void	printIdea(unsigned int const r) const;
};

#endif
