/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:33:30 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/30 16:57:00 by alouzizi         ###   ########.fr       */
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

Fixed & Fixed::operator = (const Fixed &other)
{
	value = other.getRawBits();
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (value);
}

void Fixed::setRawBits(int const raw){
	value = raw;
}
