/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:05:13 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/07 18:24:13 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	
	if (ac <= 1)
	{
		std::cout << "Error: invalide argument." << std::endl;
		return (1);
	}
	std::vector<int> data;
	std::list<int> data2;
	int nb;
	for (int i = 1; i < ac; i++)
	{
		nb = atoi(av[i]);
		if (nb < 0)
		{
			std::cout << "Error: invalide argument." << std::endl;
			return (1);
		}
		data2.push_back(nb);
		data.push_back(nb);
	}
	sortNum(data, data2);
}