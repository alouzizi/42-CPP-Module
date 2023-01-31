/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:44:05 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/31 05:39:20 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	value = other.value;
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other)
{
	value = other.value;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
	std::cout << "setRawBits member function called\n";
}

Fixed::Fixed(const int i)
{
	value = roundf(i * 256);
	std::cout << "int constructor called\n";
}
Fixed::Fixed(const float i)
{
	value = roundf(i * 256);
	std::cout << "float constructor called\n";
}

float Fixed::toFloat(void) const
{
	return ((float)value / 256);
}

int Fixed::toInt(void) const
{
	return (value / 256);
}
std::ostream &operator<<(std::ostream &out, const Fixed &in)
{
	out << in.toFloat();
	return (out);
}
