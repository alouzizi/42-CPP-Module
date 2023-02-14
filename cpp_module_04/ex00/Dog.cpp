/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:28:51 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/14 06:15:50 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << _type << "Default constructor called\n";
}
Dog::Dog(const Dog &other)
{
	_type = other._type;
	std::cout << "Dog Copy constructor called\n";
}

Dog::~Dog()
{
	std::cout << _type << " Destructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called\n";
	if (this != &other)
		_type = other._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof woof\n";
}