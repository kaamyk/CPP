/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 12:22:59 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{
	std::cout << "In Cure default constructor" << std::endl;
	return ;
}

Cure::Cure ( const Cure& source ): AMateria("cure")
{
	std::cout << "In Cure copy constructor" << std::endl;
	if (this != &source)
		*this = source;
	return ;
}

Cure::Cure ( const std::string& source ): AMateria(source)
{
	std::cout << "In Cure parametered constructor" << std::endl;
	return ;
}

Cure::~Cure ( void )
{
	std::cout << "In Cure destructor" << std::endl;
	return ;
}

Cure&				Cure::operator=( Cure const& source )
{
	this->_type = source._type;
	return (*this);
}

AMateria*			Cure::clone( void ) const
{
	Cure	*n_cure = new Cure();
	return (n_cure);
}

void				Cure::use( ICharacter& target )
{
	std::cout << "* Heals " << target.getName() << " wounds *" << std::endl;
	return ;
}
