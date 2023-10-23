/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/23 12:44:53 by antoine          ###   ########.fr       */
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

	public:
		ShrubberryCreationForm( void );
		ShrubberryCreationForm( std::string const& name );
		~ShrubberryCreationForm( void );

		void	beExecuted( Bureaucrat const& B );	
};

#endif