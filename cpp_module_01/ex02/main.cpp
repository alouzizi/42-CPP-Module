/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:08:33 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/27 19:57:51 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::string *ptr;
	std::string &ref = str;

	str = "HI THIS IS BRAIN";
	ptr = &str;

	std::cout << "Print the memory address :\n";
	std::cout << "str = " << &str << "\nptr = " << ptr << "\nref = " << &ref << "\n";

	std::cout << "Print the value : \n";
	std::cout << "str = " << str << "\nptr = " << *ptr << "\nref = " << ref << "\n";
}
