/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/04 18:06:05 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMAteria::AMateria( void )
{
	return ;
}

AMateria::AMateria( const std::string& source )
{
	this->_type = source;
	return ;
}

AMateria::~AMateria( void )
{
	return ;
}

std::string const&	getType( void ) const
{
	return (this->_type);
}

void				use( ICharacter& target)
{
	return ;
}
