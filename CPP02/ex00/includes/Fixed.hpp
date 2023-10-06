/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/06 10:24:36 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	private :
		int					_rawBits;
		static int const	_nbFractBits = 8;

	public :
		Fixed( void );
		Fixed( const Fixed &source);
		~Fixed( void );
		Fixed	&operator=( const Fixed &a);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
