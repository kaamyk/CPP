/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/10/25 11:07:28 by antoine          ###   ########.fr       */
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
		const std::string	_target;

	public:
		RobotmyRequestForm( void );
		RobotmyRequestForm( std::string const& target );
		~RobotmyRequestForm( void );

		void	beExecuted( Bureaucrat const& executor ) const;	
};

#endif