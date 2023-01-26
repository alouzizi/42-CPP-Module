/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:49:11 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/26 17:24:17 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombie = newZombie("Trbouchhmare");
	Zombie->announce();
	randomChump("Harawkane");
	delete Zombie;
}
