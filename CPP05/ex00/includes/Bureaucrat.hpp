/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/11/06 10:22:06 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class	Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;

	public:
		Bureaucrat( void );
		Bureaucrat( Bureaucrat const& source );
		Bureaucrat( std::string const& name, unsigned int grade );
		~Bureaucrat( void );

		Bureaucrat&	operator=( Bureaucrat const& source );

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

		void				setGrade( unsigned int grade );
		unsigned int		getGrade( void ) const;
		const std::string	getName( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );

};

std::ostream&	operator<<( std::ostream & os, const Bureaucrat& B );

#endif
