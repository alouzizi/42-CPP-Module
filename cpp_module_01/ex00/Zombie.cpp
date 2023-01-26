/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:24:20 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/26 17:25:02 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 
Zombie::Zombie(std::string value)
{
	name = value;
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed\n";
}

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