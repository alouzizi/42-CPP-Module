/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 05:13:11 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/15 21:56:50 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << _type << "Default constructor called\n";
}

Cat::~Cat()
{
	delete _brain;
	std::cout << _type << " Destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Miaow miaow\n";
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Cat Copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	std::cout << "Cat Copy assignment operator called\n";
	return (*this);
}