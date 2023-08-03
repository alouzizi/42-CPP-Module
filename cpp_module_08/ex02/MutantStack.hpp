/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:39:53 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/03 15:56:38 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return std::stack<T>::c.end();
	}

	const_iterator begin() const
	{
		return std::stack<T>::c.begin();
	}

	const_iterator end() const
	{
		return std::stack<T>::c.end();
	}
};

#endif