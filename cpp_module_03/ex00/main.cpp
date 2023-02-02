/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:44:33 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/02 09:30:42 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("Ali");
    ClapTrap clap2 = clap1;
    clap2.attack("Bob");
    clap2.takeDamage(5);
    clap2.beRepaired(3);
    clap2 = clap1;
    return (0);
}