/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/17 18:23:01 by anvincen         ###   ########.fr       */
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
		Bureaucrat( std::string const& name, unsigned int grade );
		~Bureaucrat( void );

		class	GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Error: The grade is TOO HIGH");
			}
		};
		class	GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Error: The grade is TOO LOW");
			}
		};

		void				setGrade( unsigned int& grade );
		unsigned int		getGrade( void ) const;
		const std::string	getName( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );

};

std::ostream&	operator<<( std::ostream & os, const Bureaucrat& B );

#endif
