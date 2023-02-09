/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:41:55 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 03:10:38 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string value)
{
	_type = value;
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	_type = other._type;
	std::cout << "WrongAnimal Copy constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "WrongAnimal Copy assignment operator called\n";
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make sound\n";
}

std::string WrongAnimal::getType() const
{
	return (_type);
}