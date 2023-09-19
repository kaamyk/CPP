/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/19 17:39:40 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

void	defineArea(Point triangle[3], Point *(area[4]))
{
	Point	tmp;
	Fixed	a( tmp.getAbscissa() );
	Fixed	o( tmp.getOrdinate() );

	tmp = triangle[0];
	a.min(a, triangle[1].getAbscissa());
	o.min(o, triangle[2].getAbscissa());
	*area[0] = tmp;

	tmp = triangle[0];
	a.max(a, triangle[1].getAbscissa());
	o.max(o, triangle[2].getAbscissa());
	*area[1] = tmp;

	tmp = triangle[0];
	a.min(a, triangle[1].getOrdinate());
	o.min(o, triangle[2].getOrdinate());
	*area[3] = tmp;

	tmp = triangle[0];
	a.max(a, triangle[1].getOrdinate());
	o.max(o, triangle[2].getOrdinate());
	*area[4] = tmp;
}

int	main( void )
{
	Point	A;
	Point	B( Fixed(2), Fixed(3) );
	Point	C( Fixed(2), Fixed(0.5f) );
	Point	triangle[3] = {A, B, C};
	Point	area[4] = {};

	area = defineArea(triangle, &area);
	std::cout << "A (" << A.getAbscissa() << ", " << A.getOrdinate() <<  ")" << std::endl;
	std::cout << "B (" << B.getAbscissa() << ", " << B.getOrdinate() <<  ")" << std::endl;
	std::cout << "C (" << C.getAbscissa() << ", " << C.getOrdinate() <<  ")" << std::endl;
	for(size_t i = 0; i < 4; ++i)
	{
		std::cout << "area[" << i << "] == ( " << area[i].getAbscissa() << ", "
			<< area[i].getOrdinate() << " )" << std::endl;
	}
	return 0;
}
