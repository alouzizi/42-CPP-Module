/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:39:43 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/17 19:35:32 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>

class ScalarConverter
{
    ScalarConverter();
    ~ScalarConverter();

public:
    static void toInt(std::string s);
    static void toChar(std::string s);
    static void toFloat(std::string s);
    static void convert(std::string s);
    static void toDouble(std::string s);
    static void handlePseudoLiterals(std::string s);
};

#endif