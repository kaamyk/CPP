/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/06 10:40:33 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"

Fixed::Fixed( void ): _rawBits(0)
{
	std::cout << "In Fixed default constructor" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed &source )
{
	std::cout << "In Fixed copy constructor" << std::endl;
	*this = source;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "In Fixed destructor" << std::endl;
	return ;
}

Fixed & Fixed::operator=( const Fixed &a )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_rawBits = a.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_rawBits );
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
	return ;
}
