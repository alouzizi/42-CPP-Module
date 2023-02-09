/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 03:35:24 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 03:37:28 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(std::string value);
	Animal(const Animal &other);
	virtual ~Animal();
	Animal &operator=(const Animal &other);
	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif