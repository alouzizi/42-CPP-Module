/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 05:13:16 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 05:14:23 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << _type << "Default constructor called\n";
}

Dog::~Dog()
{
	delete _brain;
	std::cout << _type << " Destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof woof\n";
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "Dog Copy constructor called\n";
} 

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	std::cout << "Dog Copy assignment operator called\n";
	return (*this);
}