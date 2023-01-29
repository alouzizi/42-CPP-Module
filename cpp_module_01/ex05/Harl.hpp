/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:33:03 by alouzizi          #+#    #+#             */
/*   Updated: 2023/01/29 14:09:04 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl{
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	public :
	void complain(std::string level);
};

#endif