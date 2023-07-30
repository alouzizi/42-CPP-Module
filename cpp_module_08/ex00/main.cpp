/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:58:02 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/30 12:29:42 by alouzizi         ###   ########.fr       */
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
		easyfind(a,-3);
	}
	catch(const std::exception& e)
	{
		std::cout << "element not found" << std::endl;
	}
}