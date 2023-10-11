/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 10:09:08 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
	protected :
		std::string		_type;

	public :
		WrongAnimal( void );
		WrongAnimal( std::string const type );
		WrongAnimal( WrongAnimal const& source );
		virtual ~WrongAnimal( void );

		WrongAnimal&				operator=( WrongAnimal const& source);

		void		makeSound( void ) const;
		std::string const&	getType( void ) const;
};

#endif
