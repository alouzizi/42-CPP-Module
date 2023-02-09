/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:37:25 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 03:10:19 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << _type << "Default constructor called\n";
}

Cat::~Cat()
{
	std::cout << _type << " Destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Miaow miaow\n";
}
