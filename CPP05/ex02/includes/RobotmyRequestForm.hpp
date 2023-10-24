/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/24 16:49:37 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTFORM_HPP
# define ROBOTFORM_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>

# include "AForm.hpp"

class	RobotmyRequestForm: public AForm
{
	private:

	public:
		RobotmyRequestForm( void );
		RobotmyRequestForm( std::string const& name );
		~RobotmyRequestForm( void );

		void	beExecuted( Bureaucrat const& executor );	
};

#endif