/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/24 16:49:30 by anvincen         ###   ########.fr       */
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

		void	beExecuted( Bureaucrat const& executor );	
};

#endif