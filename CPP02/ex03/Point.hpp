/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/19 16:40:29 by anvincen         ###   ########.fr       */
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

		Fixed&	getAbscissa( void );
		Fixed&	getOrdinate( void );
};

#endif
