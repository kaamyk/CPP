/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/06 11:23:12 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private :
		Fixed	_x;
		Fixed	_y;

	public	:
		Point( void );
		Point( Point const& source );
		Point( Fixed x, Fixed y );
		~Point( void );

		Point&	operator=( Point const& source );

		Fixed&	getAbs( void );
		Fixed&	getOrd( void );
		// void	setAbscissa( Fixed a );
		// void	setOrdinate( Fixed o );
		// void	setCoordinates( Fixed a, Fixed o );

};

#endif
