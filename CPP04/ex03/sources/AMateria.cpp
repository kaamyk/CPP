/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 11:29:51 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria( void )
{
	std::cout << "In AMateria default constructor" << std::endl;
	return ;
}

AMateria::AMateria( const AMateria& source ): _type(source._type)
{
	std::cout << "In AMateria copy constructor" << std::endl;
	return ;
}

AMateria::AMateria( const std::string& type ): _type(type)
{
	std::cout << "In AMateria parametered constructor" << std::endl;
	return ;
}

AMateria::~AMateria( void )
{
	std::cout << "In AMateria destructor" << std::endl;
	return ;
}

AMateria&			AMateria::operator=( AMateria const& source )
{
	if (this != &source)
		this->_type = source._type;
	return (*this);
}

std::string const&	AMateria::getType( void ) const
{
	return (this->_type);
}

void				AMateria::use( ICharacter& target )
{
	(void) target;
	return ;
}
