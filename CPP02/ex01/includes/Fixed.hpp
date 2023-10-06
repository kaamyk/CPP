/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/06 10:50:56 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private :
		int					_raw;
		static const int	_fractionalBits = 8;

	public :
		Fixed( void );
		Fixed( const Fixed &source );
		Fixed( float const &n);
		Fixed( int const &n );
		~Fixed( void );
		
		Fixed&	operator=( const Fixed &a );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

};

 std::ostream&  operator<<( std::ostream &o, const Fixed& n );

#endif
