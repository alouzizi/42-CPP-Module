/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:31:06 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/02 10:37:08 by alouzizi         ###   ########.fr       */
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
	std::vector<int> tmp;
	int shortSpan;
	tmp = _tab;
	sort(tmp.begin(), tmp.end());
	shortSpan = tmp[1] - tmp[0];
	for(unsigned int i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < shortSpan)
			shortSpan = tmp[i + 1] - tmp[i];
	}
	tmp.clear();
	return shortSpan;
}

int Span::longestSpan()
{
	std::vector<int> tmp;
	int longSpan;
	tmp = _tab;
	sort(tmp.begin(), tmp.end());
	longSpan = *(tmp.end() - 1) - *(tmp.begin());
	tmp.clear();
	return longSpan;
}
