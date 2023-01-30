/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:33:26 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/30 16:51:55 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed{
	int	value;
	static const int f = 8;
	public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed & operator = (const Fixed &other);
	~Fixed();
	int	getRawBits(void) const;
	void setRawBits(int const raw);
};
#endif