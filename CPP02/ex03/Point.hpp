/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/20 12:23:14 by antoine          ###   ########.fr       */
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
		Point( Fixed x, Fixed y );
		~Point( void );

		Fixed&	getAbs( void );
		Fixed&	getOrd( void );
		// void	setAbscissa( Fixed a );
		// void	setOrdinate( Fixed o );
		// void	setCoordinates( Fixed a, Fixed o );

};

#endif
