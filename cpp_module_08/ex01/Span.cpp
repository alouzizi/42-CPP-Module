/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:31:06 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/01 16:07:48 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_size = 0;
}

Span::Span(unsigned int N)
{
	_size = N;
}

Span::~Span()
{
}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_size = other._size;
		_tab = other._tab;
	}
	return (*this);
}

void Span::addNumber(int nb)
{
	if (_tab.size() >= _size)
		throw std::exception();
	_tab.push_back(nb);
}

int Span::shortestSpan()
{
	// implementation of the shortestSpan() method
	return 0;
}

int Span::longestSpan()
{
	std::vector<int> tmp;
	int longSpan;
	tmp = _tab;
	sort(_tab.begin(), _tab.end());
	longSpan = *(_tab.end() - 1) - *(_tab.begin());
	tmp.clear();
	return longSpan;
}