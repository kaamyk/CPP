/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/20 13:14:44 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point A, Point B, Point C, Point P );

int	main( void )
{
	Point	A( Fixed(0), Fixed(1) );
	Point	B( Fixed(1), Fixed(3) );
	Point	C( Fixed(2), Fixed(0.5f) );
	Point	P1( Fixed(5), Fixed(5) );
	Point	P2( Fixed(1), Fixed(1) );
	Point	P3( Fixed(1.5f), Fixed(1.5f) );

	std::cout << "A (" << A.getAbs() << ", " << A.getOrd() <<  ")" << std::endl;
	std::cout << "B (" << B.getAbs() << ", " << B.getOrd() <<  ")" << std::endl;
	std::cout << "C (" << C.getAbs() << ", " << C.getOrd() <<  ")" << std::endl;

	if (bsp(A, B, C, P1) == 0)
		std::cout << "P1 is NOT in ABC" << std::endl;
	else
		std::cout << "P1 is in ABC" << std::endl;
	if (bsp(A, B, C, P2) == 0)
		std::cout << "P2 is NOT in ABC" << std::endl;
	else
		std::cout << "P2 is in ABC" << std::endl;
	if (bsp(A, B, C, P3) == 0)
		std::cout << "P3 is NOT in ABC" << std::endl;
	else
		std::cout << "P3 is in ABC" << std::endl;
	return 0;
}
