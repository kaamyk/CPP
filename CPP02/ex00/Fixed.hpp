/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/15 12:44:42 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	private :
		int					_fixedPoint;
		static const int	_nbFractBits = 8;

	public :
		Fixed( void );
		Fixed( const Fixed &source);
		~Fixed( void );
		Fixed	&operator=( const Fixed &a);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
