/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:34:37 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 03:10:11 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal(std::string value)
{
	_type = value;
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal &other)
{
	_type = other._type;
	std::cout << "Animal Copy constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Animal Copy assignment operator called\n";
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal make sound\n";
}

std::string Animal::getType() const
{
	return (_type);
}