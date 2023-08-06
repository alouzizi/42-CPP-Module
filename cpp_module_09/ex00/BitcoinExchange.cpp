/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:43:36 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/06 15:36:46 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double> readcsv()
{
	std::map<std::string, double> btc;
	std::string line;
	std::ifstream file("data.csv");
	std::string valueStr , dateStr;
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		exit(1);
	}
	getline(file, line);
	while(getline(file, line))
	{
		std::stringstream lineStream(line);
		if (getline(lineStream, dateStr, ',') && getline(lineStream, valueStr))
			btc[dateStr] = atof(valueStr.c_str());
	}
	file.close();
	return btc;
}

bool isValideDate(std::string date)
{
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	for (int i = 0; i < 10; i++)
	{
		if (i != 4 && i != 7 && !isdigit(date[i]))
			return false;
	}
	return true;
}

bool checkDote(std::string value)
{
	for (size_t i = 0; i < value.length(); i++)
	{
		if (value[i] == '.')
		{
			if(value[i + 1] == '.')
				return false;
			return true;
		}
	}
	return true;
}
