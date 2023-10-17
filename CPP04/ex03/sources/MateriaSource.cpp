/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/17 10:06:35 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource( void ): _rankNextM(0)
{
	std::cout << "In MateriaSource default constructor" << std::endl;
	for (unsigned int i = 0; i < 4; ++i)
		_stock[i] = NULL;
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
	for(unsigned int i = 0; i < 4; ++i)
	{
		if (_stock[i])
			delete(_stock[i]);
	}
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

void		MateriaSource::displayAttributes( void )
{
	std::cout << "\t----- MateriaSource attributes -----" << std::endl;
	std::cout << "Stock :" << std::endl;
	for(unsigned int i = 0; i < 4; ++i)
		std::cout << "Stock [" << i << "] == " << _stock[i]->getType() << std::endl;
	std::cout << "_rankNextM == " << _rankNextM << std::endl;
	std::cout << "Last Materia learned == " << _lastMLearnt->getType() << std::endl;
	return ;
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
	if (i == 4 || _stock[i] == 0)
		return (NULL);
	return (_stock[i]->clone());
}
