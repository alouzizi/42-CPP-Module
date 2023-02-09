/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 03:39:01 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 04:38:58 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called\n";
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain Copy constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_brain[i] = other._brain[i];
	}
	std::cout << "Brain Copy assignment operator called\n";
	return (*this);
}