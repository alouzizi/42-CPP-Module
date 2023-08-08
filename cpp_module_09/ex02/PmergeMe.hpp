/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:05:57 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/08 15:35:42 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <list>
#include <ctime>

template <typename T>
void displayNum(T &num)
{
	for (typename T::iterator it = num.begin(); it != num.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
// template <typename T>
// void merge(T &data, int left, int mid, int right)
// {
// }
template <typename T>
void mergeInsertSort(T &data, int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		mergeInsertSort(data, left , mid);
		mergeInsertSort(data, mid + 1, right);
		//merge(data, left, mid, right);
	}
}

template <typename T, typename T2>
void sortNum(T &num, T2 &num2)
{
	std::cout << "Before: ";
	displayNum(num);
	clock_t start = clock();
	mergeInsertSort(num, 0, num.size() - 1);
	clock_t end = clock();
	std::cout << "After: ";
	displayNum(num);

	double time = double(end - start) / double(CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of " << num.size()
			  << " elements with std::vector: " << time << " us" << std::endl;

	start = clock();
	mergeInsertSort(num2, 0, num2.size() - 1);
	end = clock();
	time = double(end - start) / double(CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of " << num2.size()
			  << " elements with std::list: " << time << " us" << std::endl;
}

#endif