/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:33:06 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/29 15:36:48 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Harl;
	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("WARNING");
	Harl.complain("ERROR");
}