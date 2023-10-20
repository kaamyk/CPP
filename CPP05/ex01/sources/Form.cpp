/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/20 13:11:51 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include "../includes/Form.hpp"

Form::Form( void ):	_name("Anonymous"), _gradeToExecute(150),
					_gradeToSign(150), _isSigned(0) 
{
	return ;
}

Form::Form( const std::string name, const unsigned int gradeToExecute, const unsigned int gradeToSign):
																		_name(name), _gradeToExecute(gradeToExecute),
																		_gradeToSign(gradeToSign), _isSigned(0) 
{
	try{
		if (gradeToExecute < 1 || gradeToSign < 1)
			throw Form::GradeTooLowException();
		else if (gradeToExecute > 150 || gradeToSign > 150)
			throw Form::GradeTooHighException();
	}
	catch( std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return ;
}

Form::Form( Form const& source ):	_name(source._name),
									_gradeToExecute(source._gradeToExecute),
									_gradeToSign(source._gradeToSign),
									_isSigned(source._isSigned)
{
	*this = source;
	return ;
}

Form::~Form( void )
{
	return ;
}

Form&		Form::operator=( Form const& source )
{
	_isSigned = source._isSigned;
	return (*this);
}

const std::string&	Form::getName( void ) const
{
	return (_name);
}

unsigned int	Form::getGradeToExecute( void ) const
{
	return (_gradeToExecute);
}

unsigned int	Form::getGradeToSign( void ) const
{
	return (_gradeToSign);
}

bool			Form::getIfSigned( void ) const
{
	return (_isSigned);
}

bool			Form::beSigned( Bureaucrat const& B )
{
	if (B.getGrade() <= _gradeToSign){
		_isSigned = 1;
		return (1);
	}
	else
		return (0);
}

const char*		Form::GradeTooHighException::what( void ) const throw()
{
	return ("Exception: the Grade is to high");
}

const char*		Form::GradeTooLowException::what( void ) const throw()
{
	return ("Exception: the grade is too low");
}

std::ostream&	operator<<( std::ostream& os, Form const& source )
{
	os << "Form " << source.getName() << ":" << std::endl
	<< "\tGrade required to execute: " << source.getGradeToExecute() << std::endl
	<< "\tGrade to sign: " << source.getGradeToSign() << std::endl
	<< "\tIs signed: " << source.getIfSigned() << std::endl;
	return (os);
}
