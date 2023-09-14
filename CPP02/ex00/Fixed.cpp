/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/14 16:19:30 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

Fixed::Fixed( void )
{
	std::cout << "In default constructor" << std::endl;
	_fixedPointNb = 0;
	return ;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "In copy constructor" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "In destructor" << std::endl;
	return ;
}
