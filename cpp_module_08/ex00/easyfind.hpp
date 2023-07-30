/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:00:27 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/30 12:28:54 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>

void easyfind(T a, int i)
{
	std::sort(a.begin(), a.end());

	if (std::binary_search(a.begin(), a.end(), i))
		std::cout << "element found" << std::endl;
	else
		throw std::exception();
}

#endif