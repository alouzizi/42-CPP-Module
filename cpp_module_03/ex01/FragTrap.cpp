/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:10:37 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/08 03:21:09 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called";
}

ScavTrap::ScavTrap(std::string value)
{
	name = value;
	hitPoints = 100;
	energyPoints = 50;
	attackDamge = 20;
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamge = other.attackDamge;
	std::cout << "ScavTrap Copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamge = other.attackDamge;
	}
	std::cout << "ScavTrap Copy assignment operator called\n";
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " has no energy left to attack\n";
		return;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks "
			  << target << ", dealing " << attackDamge
			  << " points of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}