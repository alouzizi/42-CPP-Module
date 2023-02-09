/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:46:03 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 03:16:59 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << _type << " Default constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << _type << " Destructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Miaow miaow\n";
}