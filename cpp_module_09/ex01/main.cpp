/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:54:36 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/07 15:03:05 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: invalide argument." << std::endl;
		return (1);
	}
	std::stack<int> rpn;
	int a, b;
	for (int i = 0; av[1][i]; i++)
	{
		if (isOperator(av[1][i]))
		{
			a = rpn.top();
			rpn.pop();
			b = rpn.top();
			rpn.pop();
			rpn.push(opertion(a, b, av[1][i]));
		}
		else if (isValidNumber(av[1][i]))
		{
			if (isValidNumber(av[1][i + 1]))
			{
				std::cout << "Error" << std::endl;
				return (1);
			}
			rpn.push(av[1][i] - 48);
		}
		else if (av[1][i] != ' ')
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
	}
	std::cout << rpn.top() << std::endl;
}
