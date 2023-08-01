/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:31:14 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/01 16:05:01 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	unsigned int _size;
	std::vector<int> _tab;

public:
	Span();
	Span(const Span &other);
	Span(unsigned int N);
	~Span();
	Span &operator=(const Span &other);
	void addNumber(int nb);
	int shortestSpan();
	int longestSpan();
};

#endif