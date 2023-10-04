/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 18:12:45 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure( void ): public AMateria("cure")
{
	std::cout << "In Cure default constructor" << std::endl;
	return ;
}

Cure::Cure ( const Cure& source): public AMateria()
{
	std::cout << "In Cure copy constructor" << std::endl;
	if (this != &source)
		*this = source;
	return ;
}

Cure::Cure ( const std::string& source)
{
	std::cout << "In Cure parametered constructor" << std::endl;
	if (this != &source)
		*this = source;
	return ;
}

Cure::~Cure ( void )
{
	std::cout << "In Cure destructor" << std::endl;
	return ;
}

Cure::use( const ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << " wounds *" << std::endl;
	return ;
}

Cure*	Cure::clone( void )
{
	Cure	*n_cure = new Cure();
	return (n_cure);
}
