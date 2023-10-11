/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 14:06:02 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "In MateriaSource default constructor" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
	{
		delete _stock[i];
		_stock[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource( MateriaSource const& source )
{
	std::cout << "In MateriaSource copy constructor" << std::endl;
	if (this != &source)
		*this = source;
	return ;
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "In MateriaSource destructor" << std::endl;
	return ;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const& source )
{
	for (unsigned int i = 0; i < 4; ++i)
		_stock[i] = source._stock[i];
	_rankNextM = source._rankNextM;
	_lastMLearnt = source._lastMLearnt;
	return (*this);
}

void		MateriaSource::learnMateria( AMateria* source )
{
	if (_rankNextM >= 4)
	{
		std::cout << "The stock of materia is already full." << std::endl;
		return ;
	}
	_stock[_rankNextM] = source;
	++_rankNextM;
}

AMateria* 	MateriaSource::createMateria( std::string const& type )
{
	unsigned int	i = 0;
	if (type.compare("cure") && type.compare("ice"))
		return (NULL);
	for (i = 0; i < 4; ++i)
	{
		if (_stock[i]->getType().compare(type) == 0)
			break ;
	}
	return (_stock[i]->clone());
}
