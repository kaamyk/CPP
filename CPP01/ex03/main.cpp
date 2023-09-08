/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/08 16:09:00 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
// #include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	return (0);
}
