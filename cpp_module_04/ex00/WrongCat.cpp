/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:46:03 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/14 06:16:21 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << _type << " Default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other)
{
	_type = other._type;
	std::cout << "WrongCat Copy constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << _type << " Destructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy assignment operator called\n";
	if (this != &other)
		_type = other._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaow miaow\n";
}