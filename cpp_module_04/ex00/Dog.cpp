/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:28:51 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 03:10:26 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << _type << "Default constructor called\n";
}

Dog::~Dog()
{
	std::cout << _type << " Destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof woof\n";
}