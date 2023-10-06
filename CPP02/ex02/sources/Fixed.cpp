/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/06 11:04:22 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _raw(0)
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

Fixed::Fixed( float const &f ) : _raw(roundf(f * (1 << _fractionalBits)))
{
	std::cout << "In Fixed float constructor" << std::endl;
	return ;
}

Fixed::Fixed( int const &n ) : _raw(n << _fractionalBits)
{
	std::cout << "In Fixed int constructor" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "In Fixed destructor" << std::endl;
	return ;
}

//		OPERATOR OVERLOAD

	std::ostream&	operator<<( std::ostream& o, const Fixed& n )
{
	o << n.toFloat();
	return (o);
}

Fixed& Fixed::operator=( const Fixed& a )
{
	this->_raw = a.getRawBits();
	return (*this);
}

bool	Fixed::operator>( Fixed const& a) const
{
	if (this->_raw > a.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<( Fixed const& a) const
{
	if (this->_raw < a.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator>=( const Fixed& a)
{
	return (this->_raw >= a.getRawBits())
}

bool	Fixed::operator<=( const Fixed& a)
{
	return (this->_raw <= a.getRawBits())
}

bool	Fixed::operator==( const Fixed& a)
{
	return (this->_raw == a.getRawBits())
}

bool	Fixed::operator!=( const Fixed& a )
{
	return (this->_raw != a.getRawBits())
}

Fixed	Fixed::operator+( const Fixed& a)
{
	return ( this->toFloat() + a.toFloat() );
}

Fixed	Fixed::operator-( const Fixed& a)
{
	return ( this->toFloat() - a.toFloat() );
}

Fixed	Fixed::operator*( const Fixed& a)
{
	std::cout << this->toFloat() << " * " << a.toFloat() << " = " << this->toFloat() * a.toFloat() << std::endl;
	return ( Fixed(this->toFloat() * a.toFloat()) );
}

Fixed	Fixed::operator/( const Fixed& a)
{
	return ( this->toFloat() / a.toFloat() );
}

Fixed &	Fixed::operator++( void )
{
	this->_raw += 1;
	return ( *this );
}

Fixed	Fixed::operator++( int )	
{
	Fixed	tmp( *this );

	this->_raw += 1;
	return ( tmp );
}

Fixed &	Fixed::operator--( void )
{
	this->_raw -= 1;
	return ( *this );
}

Fixed	Fixed::operator--( int )	
{
	Fixed	tmp( *this );

	this->_raw -= 1;
	return ( tmp );
}


//		PUBLIC FUNCTIONS

Fixed const&	Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a > b)
		return ( a );
	return ( b );
}

Fixed const&	Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a < b)
		return ( a );
	return ( b );
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return ( a );
	return ( b );
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return ( a );
	return ( b );
}

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
	return ( (float)this->_raw / (1 << this->_fractionalBits) );
}

int		Fixed::toInt( void ) const
{
	return ( this->_raw >> Fixed::_fractionalBits );
}
