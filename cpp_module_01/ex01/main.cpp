/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:09:55 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/26 19:15:23 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int i;

	i = 0;

	Zombie *z = zombiesHorde(5,"Smiya");
	while(i < 5)
	{
		z[i++].announce();
	}
	delete [] z;
	
	std::cout  << "***********\n";
	i = 0;
	z = zombiesHorde(3, "Oden");
	while(i < 3)
		z[i++].announce();
	delete [] z;

	std::cout  << "***********\n";
	
}