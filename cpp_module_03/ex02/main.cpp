/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:40:27 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/08 04:06:41 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clap1("Ali");
	ClapTrap clap2 = clap1;
	clap2.attack("Bob");
	clap2.takeDamage(5);
	clap2.beRepaired(3);
	clap2 = clap1;

	ScavTrap scav1("Ali");
	ScavTrap scav2 = scav1;
	scav2.attack("Bob");
	scav2.takeDamage(5);
	scav2.beRepaired(3);
	
	FragTrap frag1("Ali");
	FragTrap frag2 = frag1;
	frag2.attack("Bob");
	frag2.takeDamage(5);
	frag2.beRepaired(3);
	return (0);
}