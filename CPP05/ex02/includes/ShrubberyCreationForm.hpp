/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/26 12:06:34 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRY_HPP
# define SHRUBBERRY_HPP

# include <iostream>
# include <fstream>

# include "AForm.hpp"

class	ShrubberryCreationForm: public AForm
{
	private:
		const std::string	_target;

	public:
		ShrubberryCreationForm( void );
		ShrubberryCreationForm( std::string const& target );
		~ShrubberryCreationForm( void );

		void	execute( Bureaucrat const& executor ) const;
};

#endif