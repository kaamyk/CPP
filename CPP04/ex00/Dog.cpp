/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 12:19:31 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : _type( "Dog" )
{
	std::cout << "In Dog constructor" << std::endl;
	return ;
}

Dog::~Dog( void )
{
	return ;
}

void	Dog::sound( void )
{
	std::cout << "WafWaf I am a dog !" << std::endl;
	return ;
}
