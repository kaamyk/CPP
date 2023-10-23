/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/23 16:48:11 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# include "AForm.hpp"

class	AForm;

class	Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;

	public:
		Bureaucrat( void );
		Bureaucrat( Bureaucrat const& source );
		Bureaucrat( std::string& name, unsigned int grade );
		~Bureaucrat( void );

		void				setGrade( unsigned int grade );
		unsigned int		getGrade( void ) const;
		const std::string	getName( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );
		void				signForm( AForm* F );

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<( std::ostream & os, const Bureaucrat& B );

#endif
