/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/20 12:22:51 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	return ;
}

Point::Point( Fixed x, Fixed y ) : _x(x), _y(y)
{
	return ;
}

Point::~Point( void )
{
	return ;
}

Fixed&	Point::getAbs( void )
{
	return ( this->_x );
}

Fixed&	Point::getOrd( void )
{
	return ( this->_y );
}

// void	Point::setAbscissa( Fixed a )
// {
// 	this->_x = a;
// 	return ;
// }

// void	Point::setOrdinate( Fixed o )
// {
// 	this->_y = o;
// 	return ;
// }

// void	Point::setCoordinates( Fixed a, Fixed o )
// {
// 	this->setAbscissa(a);
// 	this->setOrdinate(o);
// 	return ;
// }
