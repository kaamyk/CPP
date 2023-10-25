/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/25 10:21:04 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		const unsigned int	_gradeToExecute;
		const unsigned int	_gradeToSign;
		bool				_isSigned;

	public:
		AForm( void );
		AForm( const std::string name, const unsigned int gradeToExecute, const unsigned int gradeToSign);
		AForm( AForm const& source );
		~AForm( void );

		AForm&	operator=( AForm const& source );

		// void				setName( std::string name );
		// void				setGradeToExecute( unsigned int const& grdExec );
		// void				setGradeToSign( unsigned int const& grdSign );

		const std::string&	getName( void ) const;
		unsigned int		getGradeToExecute( void ) const;
		unsigned int		getGradeToSign( void ) const;
		bool				getIfSigned( void ) const;
		bool				beSigned( Bureaucrat const& B );
		virtual void		beExecuted( Bureaucrat const& executor ) const = 0;

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	IsNotSignedException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<( std::ostream& os, AForm const& source );

#endif