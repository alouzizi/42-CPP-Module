/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:11:35 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/28 16:47:15 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("Ak-47");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("crude spiked club");
		bob.attack();
	}
	{
		Weapon club = Weapon("Anzio 20mm rifle");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("Dragunov SVD");
		jim.attack();
	}
	return 0;
}