/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:26:07 by alouzizi          #+#    #+#             */
/*   Updated: 2022/12/28 18:33:30 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Contact::set_fname(std::string value){firstname = value;};
std::string Contact::get_fname(){return firstname;};

void Contact::set_nickname(std::string value){nickname = value;};
std::string Contact::get_nickname(){return nickname;};

void Contact::set_lname(std::string value){lastname = value;};
std::string Contact::get_lname(){return lastname;};

void Contact::set_num(std::string value){phonenumber = value;};
std::string Contact::get_num(){return phonenumber;};

void Contact::set_ds(std::string value){darkestsecret = value;};
std::string Contact::get_ds(){return darkestsecret;};

void PhoneBook::set(std::string list[5], int i){
    
    contact[i].set_fname(list[0]);
    contact[i].set_lname(list[1]);
    contact[i].set_nickname(list[2]);
    contact[i].set_num(list[3]);
    contact[i].set_ds(list[4]);
};

std::string PhoneBook::get(int i, int j) {
	std::string str;

	if(contact[i].get_fname().empty())
		return str;
	if (j == 1)
		str = contact[i].get_fname();
	if (j == 2)
		str = contact[i].get_lname();
	if (j == 3)
		str = contact[i].get_nickname();
	if (j == 4)
		str = contact[i].get_num();
	if(j == 5)
		str = contact[i].get_ds();
  return str;
}

void	ft_print(std::string value)
{
	if (value.size() > 10)
    	std::cout << std::setw(9)<< value.substr(0, 9) << ".";
  	else
		std::cout<< std::setw(10) << value;
	std::cout << "|";
}

std::string get_lien(std::string s)
{
	std::string	value;
	while(1)
	{
		std::cout<< s;
		if (!getline(std::cin, value))
			exit (1);
		if (!value.empty())
			break;
		std::cout << "This element is empty.\n";
	}
	return (value);
}