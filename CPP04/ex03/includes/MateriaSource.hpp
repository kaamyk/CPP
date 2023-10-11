/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/11 13:51:05 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERSRC_HPP
# define MATERSRC_HPP

#include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource 
{
	private:
		AMateria*		_stock[4];
		unsigned int	_rankNextM;
		AMateria*		_lastMLearnt;

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const& source );
		~MateriaSource( void );
		
		MateriaSource&	operator=( MateriaSource const& source );

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

#endif