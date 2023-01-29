/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:33:01 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/29 15:18:21 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "I love having extra bacon for my"
				 " 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money."
				 " You didn’t put enough bacon in my burger! If you did,"
				 " I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free."
				 " I’ve been coming foryears whereas you started working"
				 " here since last month.\n";
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	int	i;

	i = 0;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fcts[])(void) ={&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while(level != levels[i])
	{
		i++;
		if (i >= 4)
			break;
	}
	if (i < 4)
		(this->*fcts[i])();
	
}