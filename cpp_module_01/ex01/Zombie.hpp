/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:10:22 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/26 19:10:04 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	std::string name;

public:
	Zombie();
	void set_name(std::string value);
	void announce();
	~Zombie();
};

Zombie *zombiesHorde(int N, std::string name);
#endif
