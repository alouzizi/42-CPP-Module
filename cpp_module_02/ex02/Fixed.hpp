/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 06:27:58 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/01 05:53:00 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <iostream>

class Fixed
{
	int value;
	static const int f = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int i);
	Fixed(const float i);
	~Fixed();
	Fixed	&operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	bool	operator>(const Fixed &other)const;
	bool	operator<(const Fixed &other)const;
	bool	operator>=(const Fixed &other)const;
	bool	operator<=(const Fixed &other)const;
	bool	operator==(const Fixed &other)const;
	bool	operator!=(const Fixed &other)const;
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;
	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	static Fixed &min(Fixed &other, Fixed &x);
	static const Fixed &min(const Fixed &other, const Fixed &x);
	static Fixed &max(Fixed &other, Fixed &x);
	static const Fixed &max(const Fixed &other, const Fixed &x);
};
std::ostream &operator<<(std::ostream &out, const Fixed &in);
#endif