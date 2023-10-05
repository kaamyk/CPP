/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/05 19:32:23 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MaterialSource.hpp"

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

void	learnMateria( AMateria* source )
{
	if (_rankNextM >= 4)
		return ;
	Amateria	nM(*source);
	_stock[_rankNextM] = nM;
	lastMLearnt = new AMateria(nM);
	++_rankNextM;
}
