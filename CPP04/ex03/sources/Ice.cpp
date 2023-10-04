/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 18:07:34 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice( void ): public AMateria("ice")
{
	std::cout << "In Ice default constructor" << std::endl;
	return ;
}

Ice::Ice ( const Ice& source): public AMateria()
{
	std::cout << "In Ice copy constructor" << std::endl;
	if (this != &source)
		*this = source;
	return ;
}

Ice::~Ice ( void )
{
	std::cout << "In Ice destructor" << std::endl;
	return ;
}

void	Ice::use( const ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

Ice*	Ice::clone( void )
{
	Ice	*n_ice = new Ice();
	return (n_ice);
}
