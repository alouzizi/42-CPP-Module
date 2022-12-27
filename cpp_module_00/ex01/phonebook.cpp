/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:26:07 by alouzizi          #+#    #+#             */
/*   Updated: 2022/12/27 23:21:52 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
    contact[i].set_num(list[4]);
    };

std::string PhoneBook::get(int i) {
  std::string str;
  str += "First name: " + contact[i].get_fname() + "\n";
  str += "Nickname: " + contact[i].get_lname() + "\n";
  str += "Last name: " + contact[i].get_nickname() + "\n";
  str += "Phone number: " + contact[i].get_num() + "\n";
  str += "Darkest secret: " + contact[i].get_ds() + "\n";
  return str;
}

int	main()
{
	std::string name;
	PhoneBook ok;
	std::string list[5];
	while(1)
	{
		std::cout << ": Add | SEARCH | EXIT: ";
		if (!getline (std::cin,name))
			return (-1);
		if (name.compare("Add") == 0)
		{
			// save a new contact
		}
		if (name.compare("SEARCH") == 0)
		{
			// display a specific contact
		}
		if (name.compare("EXIT") == 0)
		{
			// The program quits and the contacts are lost forever!
			return (0);
		}
	}	
}
