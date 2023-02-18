/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:37:25 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/14 04:22:16 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << _type << "Default constructor called\n";
}

Cat::Cat(const Cat &other)
{
	_type = other._type;
	std::cout << "Cat Copy constructor called\n";
}

Cat::~Cat()
{
	std::cout << _type << " Destructor called\n";
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called\n";
	if (this != &other)
		_type = other._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaow miaow\n";
}
