/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/05 19:16:13 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERSRC_HPP
# define MATERSRC_HPP

#include <string>

#include "AMateria.hpp"

class MateriaSource
{
	private:
		AMateria		_stock[4];
		unsigned int	_rankNextM;
		AMateria		_lastMLearnt;

	public:
		MateriaSource( void );
		MateriaSource( AMateria const& source );
		~IMateriaSource( void );
		
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

#endif