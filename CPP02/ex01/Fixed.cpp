/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/18 16:03:00 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

//		CONSTRUCTOR

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	_raw = 0;
	return ;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
	return ;
}

Fixed::Fixed( float const &f ) : _raw(f * (1 << Fixed::_fractionalBits))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const &n ) : _raw(n << Fixed::_fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

//		DESTRUCTOR

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//		OPERATOR OVERLOAD

Fixed& Fixed::operator=( const Fixed& a )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_raw = a.getRawBits();
	return (*this);
}

std::ostream&	operator<<( std::ostream &o, const Fixed& n )
{
	o << n.toFloat();
	return (o);
}


//		PUBLIC FUNCTIONS

int		Fixed::getRawBits( void ) const
{
	return ( this->_raw );
}

void	Fixed::setRawBits( int const raw )
{
	this->_raw = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	return ( (float)this->_raw / (1 << Fixed::_fractionalBits) );
}

int		Fixed::toInt( void ) const
{
	return ( this->_raw >> Fixed::_fractionalBits );
}
