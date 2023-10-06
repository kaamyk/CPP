/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/06 11:21:45 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Point.hpp"

void	ft_abs( Fixed &N )
{
	if (N < 0)
		N = N * (-1);
	return ;
}

Fixed	getArea( Point P1, Point P2, Point P3 )
{
	Fixed	tmp;

	tmp = P1.getAbs() * (P2.getOrd() - P3.getOrd());
	tmp = tmp + (P2.getAbs() * (P3.getOrd() - P1.getOrd()));
	tmp = tmp + (P3.getAbs() * (P1.getOrd() - P2.getOrd()));
	tmp = tmp / 2;
	ft_abs(tmp);
	return ( tmp );
}

bool	bsp( Point const A, Point const B, Point const C, Point const P )
{
	Fixed	ABC;
	Fixed	partArea;

	partArea = getArea(A, B, P);
	partArea = partArea + getArea(A, C, P);
	partArea = partArea + getArea(B, C, P);

	ABC = getArea(A, B, C);
	return (ABC == partArea);
}
