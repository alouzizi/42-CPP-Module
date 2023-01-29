/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:52:37 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/29 13:27:52 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string line, char **av)
{
	std::string newline;
	int i;

	i = 0;
	while ((i = line.find(av[2], i)) != (int)std::string::npos)
	{
		newline.append(line, 0, i);
		newline.append(av[3]);
		i += ((std::string)av[2]).length();
		line.erase(0, i);
		i = 0;
	}
	newline.append(line);
	return (newline);
}

int main(int ac, char **av)
{
	std::ifstream inputfile;
	std::ofstream outputfile;
	std::string line;

	if (ac != 4)
	{
		std::cerr << "invalide argiments\n";
		return (1);
	}
	inputfile.open(av[1]);
	if (inputfile.fail())
	{
		std::cerr << "Errore opening file\n";
		return (1);
	}
	outputfile.open(std::string(av[1]) + ".replace");
	if (outputfile.fail())
	{
		std::cerr << "Errore opening file\n";
		return (1);
	}
	while (std::getline(inputfile, line))
	{
		line = replace(line, av);
		outputfile << line << "\n";
	}
	outputfile.close();
	inputfile.close();
	return (0);
}