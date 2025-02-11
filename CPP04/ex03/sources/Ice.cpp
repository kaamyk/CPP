/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/16 11:59:07 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
	std::cout << "In Ice default constructor" << std::endl;
	return ;
}

Ice::Ice ( const Ice& source): AMateria("ice")
{
	std::cout << "In Ice copy constructor" << std::endl;
	if (this != &source)
		*this = source;
	return ;
}

Ice&	Ice::operator=( Ice const& source )
{
	(void) source;
	_type = "ice";
	return (*this);
}

Ice::~Ice ( void )
{
	std::cout << "In Ice destructor" << std::endl;
	return ;
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

AMateria*	Ice::clone( void ) const
{
	Ice	*n_ice = new Ice();
	return (n_ice);
}
