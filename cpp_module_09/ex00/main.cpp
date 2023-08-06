/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:43:51 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/06 15:51:52 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	std::map<std::string, double> btc;
	std::string		line, date, value;
	std::ifstream	file(av[1]);
	if (!file.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(1);
	}
	btc = readcsv();
	getline(file, line);
	while (getline(file, line))
	{
		std::stringstream lineStream(line);
		if (getline(lineStream, date, '|') && getline(lineStream, value))
		{
			date.erase(date.find_last_not_of(" \t") + 1);
			double val = std::atof(value.c_str());
			if (val < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (val > 1000)
				std::cout << "Error: too large a number." << std::endl;
			else if (!checkDote(value))
				std::cout << "Error: bad input." << std::endl;
			else if (!isValideDate(date))
				std::cout << "Error: bad input => " << date << std::endl;
			else
			{
				if (btc.find(date) != btc.end())
					std::cout << date << " => " << val << " = "
							  << val * btc.at(date) << std::endl;
				else
				{
					std::map<std::string, double>::iterator it = btc.lower_bound(date);
					if (it != btc.begin())
						it--;
					std::cout << date << " => " << val << " = "
							  << val * it->second << std::endl;
				}
			}
		}
		else
			std::cout << "Error: bad input => " << date << std::endl;
	}
}
