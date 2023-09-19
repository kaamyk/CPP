/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/19 16:40:30 by anvincen         ###   ########.fr       */
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

Fixed&	Point::getAbscissa( void )
{
	return ( this->_x );
}

Fixed&	Point::getOrdinate( void )
{
	return ( this->_y );
}
