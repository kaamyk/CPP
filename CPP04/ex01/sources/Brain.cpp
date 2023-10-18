/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/18 14:23:42 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain( void )
{
	std::cout << "In Brain default constructor" << std::endl;
	return ;
}

Brain::Brain( std::string ideas[100] )
{
	std::cout << "In Brain parametered constructor" << std::endl;
	for(unsigned int i = 0; i < 100; ++i)
		this->_ideas[i] = ideas[i];
	return ;
}

Brain::Brain( Brain const& source )
{
	std::cout << "In Brain copy constructor" << std::endl;
	if (this != &source)
		*this = source;
	return ;
}

Brain::~Brain( void )
{
	return ;
}

Brain&	Brain::operator=( Brain const& source)
{
	for(unsigned int i = 0; i < 100; ++i)
		this->_ideas[i] = source._ideas[i];
	return (*this);
}

void	Brain::setIdea(unsigned int const r, std::string const newIdea)
{
	std::cout << "Setting the idea" << std::endl;
	this->_ideas[r] = newIdea;
	return ;
}

void	Brain::printIdea(unsigned int const r)
{
	std::cout << this->_ideas[r] << std::endl;
	return ;
}
