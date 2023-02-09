/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 05:13:09 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/09 05:13:37 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain
{
	std::string *_brain;
public:
	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain &other);
	
};

#endif