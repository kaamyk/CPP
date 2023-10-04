/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/03 19:29:06 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	private :
		std::string	_ideas[100];

	public :
		Brain( void );
		Brain( std::string ideas[100] );
		Brain( Brain const& source );
		~Brain( void );

		Brain&	operator=( Brain const& source );

		void	setIdea(unsigned int const r, std::string const newIdea);
		void	printIdea(unsigned int const r);
};

#endif
