/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 11:59:10 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : _type( "Cat" )
{
	std::cout << "In Cat constructor" << std::endl;
	return ;
}

Cat::~Cat( void )
{
	return ;
}

void	Cat::sound( void )
{
	std::cout << "MeowMeow I am a cat !" << std::endl;
	return ;
}
