/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:15:26 by alouzizi          #+#    #+#             */
/*   Updated: 2022/12/28 18:12:39 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	PhoneBook	ok;
	std::string	name;
	int i = 0;
	int j;
	std::string	list[5];

	while(1)
	{
		std::cout << ": Add | SEARCH | EXIT: ";
		if (!getline(std::cin,name))
			return (-1);
		if (name.compare("Add") == 0)
		{	list[0] = get_lien("Firstname: ");
			list[1] = get_lien("Lastname: ");
			list[2] = get_lien("Nickname: ");
			list[3] = get_lien("Phonenumber: ");
			list[4] = get_lien("Darkestsecret: ");
			ok.set(list, i);
			i++;
			if (i == 8)
				i = 0;
		}
		if (name.compare("SEARCH") == 0)
		{
			j = 0;
			while(!ok.get(j,1).empty())
			{
				std::cout << "-------------------------------------------------------\n";
				std::cout << std::setw(10) << j + 1 << "|"; 
				ft_print(ok.get(j,1));
				ft_print(ok.get(j,2));
				ft_print(ok.get(j,3));
				j++;
				std::cout << "\n";
			}
			std::cout << "-------------------------------------------------------\n";
			while(1)
			{
				std::cout << "Choise countact: ";
				if(!getline(std::cin, name))
					return(-1);
				if(name[0] == '\0' || name.length() > 1 || !isdigit(name[0]))
				{
					std::cout<< "Error: invalid argument\n";
				}
				else
				{
					j = std::stoi(name);
					if (!ok.get(j - 1 ,1).empty() && j < 9)
					{
						std::cout << "Firstname: " << ok.get(j - 1,1) << "\n";
						std::cout << "Lastname: " << ok.get(j - 1,2) << "\n";
						std::cout << "Nickname: " << ok.get(j - 1,3) << "\n";
						std::cout << "Phonenumber: " << ok.get(j - 1,4) << "\n";
						std::cout << "Darkestsecret: " << ok.get(j - 1,5) << "\n";
						break ;
					}
					else
						std::cout << "Error: invalid index\n";
				}
			}
		}
		if (name.compare("EXIT") == 0)
		{
			return (0);
		}
		
	}	
}
