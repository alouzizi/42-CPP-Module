/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:05:13 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/09 18:38:06 by alouzizi         ###   ########.fr       */
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
	std::deque<int> data2;
	int nb;
	for (int i = 1; i < ac; i++)
	{
		if (isdigit(av[i][0]) == 0)
		{
			std::cout << "Error: invalide argument." << std::endl;
			return (1);
		}
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
