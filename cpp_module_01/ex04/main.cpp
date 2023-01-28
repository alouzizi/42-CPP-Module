/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:52:37 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/28 21:13:35 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include <fstream>

std::string replace(std::string line, char **av)
{
	int	i = 0;
	int	j =0;
	int p = 0;

	while (i < (int) line.length())
	{
		p = line.find(av[2],i);
		if(p != (int) std::string::npos)
		{
			while(av[3][j])
				line[p++] = av[3][j++];
			p -= ((std::string )av[3]).length();
			i = p + ((std::string )av[3]).length();
			j = 0;
		}
		else
			break;
	}
	return (line);
}

int main(int ac, char **av)
{
	std::ifstream	inputfile;
	std::ofstream	outputfile;
	std::string		line;

	if (ac != 4)
	{
		std::cerr << "invalide argiments\n";
		return (1);
	}
	inputfile.open (av[1]);
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
	while(std::getline(inputfile, line))
	{
		line = replace(line, av);
		outputfile << line << "\n";
	}
	outputfile.close();
	inputfile.close();
	return (0);
}