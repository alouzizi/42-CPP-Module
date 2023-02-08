/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:40:22 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/08 04:08:18 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called";
}

FragTrap::FragTrap(std::string value)
{
	name = value;
	hitPoints = 100;
	energyPoints = 100;
	attackDamge = 30;
	std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(const FragTrap &other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamge = other.attackDamge;
	std::cout << "FragTrap Copy constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamge = other.attackDamge;
	}
	std::cout << "FragTrap Copy assignment operator called\n";
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (energyPoints <= 0)
	{
		std::cout << "FragTrap " << name << " has no energy left to attack\n";
		return;
	}
	energyPoints--;
	std::cout << "FragTrap " << name << " attacks "
			  << target << ", dealing " << attackDamge
			  << " points of damage!\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "high fives\n";
}