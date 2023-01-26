/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:17:05 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/26 19:09:57 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "Zombie";
}

void Zombie::set_name(std::string value)
{
    name = value;
}

Zombie::~Zombie()
{
    std::cout << name << ": is destroyed\n";
}

void Zombie::announce() { std::cout << name
                                    << ": BraiiiiiiinnnzzzZ..\n"; }
