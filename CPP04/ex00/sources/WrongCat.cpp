/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 10:16:13 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "In WrongCat constructor" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "In WrongCat destructor" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=( WrongCat const& source )
{
	if (this != &source)
		this->_type = source._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "MeowMeow I am a WrongCat !" << std::endl;
	return ;
}
