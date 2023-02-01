/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 06:27:55 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/01 05:52:47 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	value = other.value;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		value = other.value;
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed::Fixed(const int i)
{
	value = roundf(i * 256);
}
Fixed::Fixed(const float i)
{
	value = roundf(i * 256);
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

bool Fixed::operator>(const Fixed &other) const
{
	return (value > other.value);
}
bool Fixed::operator<(const Fixed &other) const
{
	return (value < other.value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (value >= other.value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (value <= other.value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (value == other.value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (value != other.value);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed &Fixed::operator--()
{
	--value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	value++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	value--;
	return (temp);
}

Fixed &Fixed::min(Fixed &other, Fixed &x)
{
	if (other.value < x.value)
		return (other);
	return (x);
}

const Fixed &Fixed::min(const Fixed &other, const Fixed &x)
{
	if (other.value < x.value)
		return (other);
	return (x);
}

Fixed &Fixed::max(Fixed &other, Fixed &x)
{
	if (other.value > x.value)
		return (other);
	return (x);
}

const Fixed &Fixed::max(const Fixed &other, const Fixed &x)
{
	if (other.value > x.value)
		return (other);
	return (x);
}
