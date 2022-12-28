#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
	public :
	int i;
	void set_fname(std::string value);
	    std::string get_fname();
	void set_nickname(std::string value);
		std::string get_nickname();
	void set_lname(std::string value);
		std::string get_lname();
	void set_num(std::string value);
		std::string get_num();
	void set_ds(std::string value);
		std::string get_ds();
};

class PhoneBook{
    Contact contact[8];
    public :
    void set(std::string list[5], int i);
    std::string get(int i, int j);
};

std::string get_lien(std::string s);
void	ft_print(std::string value);
#endif