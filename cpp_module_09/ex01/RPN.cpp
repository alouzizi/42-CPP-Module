/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:54:33 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/07 14:58:46 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isOperator(char op)
{
	if (op == '+' || op == '-' || op == '/' || op == '*')
		return true;
	return false;
}

int opertion(int a, int b, char op)
{
	if (op == '+')
		return (b + a);
	if (op == '-')
		return (b - a);
	if (op == '*')
		return (a * b);
	if (op == '/')
	{
		if (a == 0)
			return 0;
		return (b / a);
	}
	else
		return INT_MIN;
}

bool isValidNumber(char nb)
{
	if (nb >= '0' && nb <= '9')
		return true;
	return false;
}