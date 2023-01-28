/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:11:27 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/28 16:48:29 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " is unarmed" << std::endl;
}

HumanB::HumanB(std::string value)
{
	name = value;
	weapon = NULL;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	weapon = &Weapon;
}
