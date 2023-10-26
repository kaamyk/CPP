/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/26 12:13:38 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALFORM_HPP
# define PRESIDENTIALFORM_HPP

# include <iostream>
# include <fstream>

# include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{
	private:
		const std::string _target;

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const& target );
		~PresidentialPardonForm( void );

		void	execute( Bureaucrat const& executor ) const;	
};

#endif