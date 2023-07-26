/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:09:24 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/26 10:17:09 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	int _nb;

public:
	Awesome(void) : _nb(42) {}
	int get(void) const { return this->_nb; }
};

std::ostream &operator<<(std::ostream &out, Awesome const &in)
{
	out << in.get();
	return (out);
}

int main()
{
	int array[] = {0, 1, 2, 3, 4, 5};
	Awesome array2[5];
	std::string array3[] = {"Hello", "World", "!"};
	iter(array, 6, print<int>);
	iter(array2, 5, print<Awesome>);
	iter(array3, 3, print<std::string>);
	return 0;
}