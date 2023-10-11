/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 10:18:22 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public :
		WrongCat( void );
		WrongCat(WrongCat const & src);
		~WrongCat( void );

		WrongCat&	operator=( WrongCat const& source );

		void	makeSound( void ) const;
};

#endif
