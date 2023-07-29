/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:13:44 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/29 12:06:07 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		
		std::string s[] = {"Hello", "World", "!"};
		Array<int> a(5);
		Array<std::string> b(3);
		for (int i = 0; i < 5; i++)
		{
			a[i] = i;
			std::cout << a[i] << std::endl;
		}
		for (int i = 0; i < 3; i++)
		{
			b[i] = s[i];
			std::cout << b[i] << std::endl;
		}
		std::
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}