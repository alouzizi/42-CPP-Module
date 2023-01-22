/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:49:11 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/22 17:04:59 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() { std::cout << name
									<< ": BraiiiiiiinnnzzzZ..\n"; }

Zombie *newZombie(std::string value)
{
	Zombie *Zombies = new Zombie(value);
	return Zombies;
}

void randomChump(std::string name)
{
	Zombie Zombie(name);
	Zombie.announce();
}

int main()
{
	Zombie *Zombie = newZombie("TrbouchHmare");
	Zombie->announce();
	randomChump("HaraWkane");
	delete Zombie;
}
