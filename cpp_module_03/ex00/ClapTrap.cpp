/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:44:27 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/02 09:19:00 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string value)
{
	name = value;
	hitPoints = 10;
	energyPoints = 10;
	attackDamge = 0;
	std::cout << "ClapTrap is created!\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamge = other.attackDamge;
	std::cout << "Copy constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamge = other.attackDamge;
	}
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy left to attack\n";
		return;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks "
			  << target << ", dealing " << attackDamge
			  << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{

	if (hitPoints <= amount)
	{
		std::cout << "ClapTrap " << name << " has been died\n";
		return;
	}
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount
			  << " points of domage, and now has " << hitPoints
			  << " hit points.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy left to repair itself\n";
		return;
	}
	energyPoints -= 1;
	hitPoints += amount;
	std::cout << "ClapTrap " << name
			  << " repairs itself for " << amount
			  << " points, and now has " << hitPoints
			  << " hit points.\n";
}
