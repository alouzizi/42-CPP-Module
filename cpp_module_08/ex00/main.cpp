/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:58:02 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/01 13:53:02 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> a;
	a.push_back(0);
	a.push_back(2);
	a.push_back(-3);
	a.push_back(11);
	a.push_back(5);
	a.push_back(6);

	try
	{
		int pos = easyfind(a, -3);
		std::cout << "element found at position " << pos << std::endl;
		std::cout << a[pos] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "element not found" << std::endl;
	}
}