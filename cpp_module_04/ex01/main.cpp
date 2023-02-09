/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:39:25 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 05:02:20 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Dog copy;
	{
		Dog tmp = copy;
	}
	std::cout << copy.getType() << "\n";
	const Animal* test[2] = {new Dog(),new Cat()};
	for (int i = 0; i < 2; i++)
	{
		delete test[i];
	}

	return (0);
}