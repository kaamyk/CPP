/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/24 17:55:52 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#include "../includes/ShrubberyCreationForm.hpp"

AForm::AForm( void ):	_name("Unknown"), _gradeToExecute(150),
					_gradeToSign(150), _isSigned(0) 
{
	return ;
}

AForm::AForm( const std::string name, const unsigned int gradeToExecute, const unsigned int gradeToSign):
																		_name(name), _gradeToExecute(gradeToExecute),
																		_gradeToSign(gradeToSign), _isSigned(0) 
{
	try{
		if (gradeToExecute < 1 || gradeToSign < 1)
			throw AForm::GradeTooLowException();
		else if (gradeToExecute > 150 || gradeToSign > 150)
			throw AForm::GradeTooHighException();
	}
	catch( std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return ;
}

AForm::AForm( AForm const& source ):	_name(source._name),
									_gradeToExecute(source._gradeToExecute),
									_gradeToSign(source._gradeToSign),
									_isSigned(source._isSigned)
{
	*this = source;
	return ;
}

AForm::~AForm( void )
{
	return ;
}

AForm&		AForm::operator=( AForm const& source )
{
	_isSigned = source._isSigned;
	return (*this);
}

const std::string&	AForm::getName( void ) const
{
	return (_name);
}

unsigned int	AForm::getGradeToExecute( void ) const
{
	return (_gradeToExecute);
}

unsigned int	AForm::getGradeToSign( void ) const
{
	return (_gradeToSign);
}

bool			AForm::getIfSigned( void ) const
{
	return (_isSigned);
}

bool			AForm::beSigned( Bureaucrat const& B )
{
	if (B.getGrade() <= _gradeToSign){
		_isSigned = 1;
		return (1);
	}
	else
		return (0);
}

const char*		AForm::GradeTooHighException::what( void ) const throw()
{
	return ("Exception: the Grade is to high");
}

const char*		AForm::GradeTooLowException::what( void ) const throw()
{
	return ("Exception: the grade is too low");
}

const char*		AForm::IsNotSignedException::what( void ) const throw()
{
	return ("Exception: the Form is not signed yet");
}

std::ostream&	operator<<( std::ostream& os, AForm const& source )
{
	os << "AForm " << source.getName() << ":" << std::endl
	<< "\tGrade required to execute: " << source.getGradeToExecute() << std::endl
	<< "\tGrade to sign: " << source.getGradeToSign() << std::endl
	<< "\tIs signed: " << source.getIfSigned() << std::endl;
	return (os);
}
