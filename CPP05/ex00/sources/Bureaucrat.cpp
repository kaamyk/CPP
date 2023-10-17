/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/17 18:12:27 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("default"), _grade(1)
{
	return ;
}

Bureaucrat::Bureaucrat( std::string const& name, unsigned int grade ): _name(name), _grade(150)
{
	try{
		if (grade >= 1 && grade <= 150){
			_grade = grade;
		}
		else if (grade < 1){
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150){
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

std::ostream&	operator<<( std::ostream & os, const Bureaucrat& B )
{
	os << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
	return (os);
}

void		Bureaucrat::setGrade( unsigned int& grade )
{
	try{
		if (grade >= 1 && grade <= 150){
			_grade = grade;
		}
		else if (grade < 1){
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150){
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return ;
}

unsigned int	Bureaucrat::getGrade( void ) const
{
	return (_grade);
}

std::string const	Bureaucrat::getName( void ) const
{
	return (_name);
}

void			Bureaucrat::incrementGrade( void )
{
	--_grade;
	try{
		if (_grade >= 1){
			return ;
		}
		else if (_grade < 1){
			throw Bureaucrat::GradeTooHighException();
		}
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return ;
}

void			Bureaucrat::decrementGrade( void )
{
	--_grade;
	try{
		if (_grade <= 150){
			return ;
		}
		else if (_grade > 150){
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return ;
}
