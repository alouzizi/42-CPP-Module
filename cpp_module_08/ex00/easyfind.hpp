/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:00:27 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/01 13:51:42 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>

int easyfind(T a, int i)
{

	typename T::iterator it = std::find(a.begin(), a.end(), i);
	if (it != a.end())
		return std::distance(a.begin(), it);
	else
		throw std::exception();
}

#endif