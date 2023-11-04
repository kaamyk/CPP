/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/11/04 14:07:44 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotmyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:
		AForm*	(Intern::*_makerTab[3])( std::string target );

		AForm*	makePresidentialForm( std::string target );
		AForm*	makeRobotForm( std::string target );
		AForm*	makeShrubberryForm( std::string target );

	public:
		Intern( void );
		Intern( Intern const& source );
		~Intern( void );

		Intern&	operator=( Intern const& source );

		AForm*	makeForm( const std::string formName, const std::string target );

		class	InvalidFormException: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
};

#endif
