/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:33:09 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/26 19:10:15 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombiesHorde(int N, std::string name)
{
	int i;

	i = 0;
	Zombie *zombies = new Zombie[N];
	while (i < N)
		zombies[i++].set_name(name);
	return (zombies);
}