/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:09:29 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/26 10:16:26 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T, typename func>
void iter(T *array, int l, func fun)
{
	for (int i = 0; i < l; i++)
		fun(array[i]);
}

template <typename T>

void print(T const &s)
{
	std::cout << s << std::endl;
}
#endif