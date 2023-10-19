/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/19 16:39:43 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class	Form
{
	private:
		const std::string	_name;
		const unsigned int	_gradeToExecute;
		const unsigned int	_gradeToSign;
		bool				_isSigned;

	public:
		Form( void );
		Form( const std::string name, const unsigned int gradeToExecute, const unsigned int gradeToSign, bool isSigned);
		Form( Form const& source );
		~Form( void );

		Form&	operator=( Form const& source );

		const std::string&	getName( void ) const;
		unsigned int		getGradeToExecute( void ) const;
		unsigned int		getGradeToSign( void ) const;
		bool				getIfSigned( void ) const;

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
};

std::ostream&	operator<<( std::ostream& os, Form const& source );

#endif