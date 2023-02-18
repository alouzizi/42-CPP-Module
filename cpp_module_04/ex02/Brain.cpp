/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 05:12:55 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/15 20:30:02 by alouzizi         ###   ########.fr       */
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
			_ideas[i] = other._ideas[i];
	}
	std::cout << "Brain Copy assignment operator called\n";
	return (*this);
}