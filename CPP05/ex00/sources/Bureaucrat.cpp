/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/11/06 10:22:39 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("default"), _grade(1)
{
	std::cout << "In the Bureaucrat's default constructor" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const& source )
{
	if (this != &source)
		_grade = source._grade;
	return ;
}

Bureaucrat::Bureaucrat( std::string const& name, unsigned int grade ): _name(name), _grade(150)
{
	std::cout << "In the Bureaucrat's parametered constructor" << std::endl;
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

Bureaucrat&		Bureaucrat::operator=( Bureaucrat const& source )
{
	_grade = source._grade;
	return (*this);
}

std::ostream&	operator<<( std::ostream & os, const Bureaucrat& B )
{
	os << B.getName() << ", bureaucrat grade " << B.getGrade();
	return (os);
}

void		Bureaucrat::setGrade( unsigned int grade )
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
	if(_grade == 1){
		return (throw Bureaucrat::GradeTooHighException());
	}
	else
		--_grade;
	return ;
}

void			Bureaucrat::decrementGrade( void )
{
	if (_grade + 1 > 150)
		return (throw Bureaucrat::GradeTooLowException());
	else
		++_grade;
	return ;
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Error: The grade is TOO LOW");
}

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Error: The grade is TOO HIGH");
}
