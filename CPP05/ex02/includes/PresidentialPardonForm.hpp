/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/24 16:21:35 by anvincen         ###   ########.fr       */
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

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const& name );
		~PresidentialPardonForm( void );

		void	beExecuted( Bureaucrat const& executor );	
};

#endif