/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:11:21 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/28 16:13:34 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string value, Weapon &Weapon) : weapon(Weapon)
{
	name = value;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
