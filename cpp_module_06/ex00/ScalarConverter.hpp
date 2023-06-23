/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:39:43 by alouzizi          #+#    #+#             */
/*   Updated: 2023/06/23 01:37:59 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <iostream>

class ScalarConverter
{
public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
    class ImpossibleException : public std::exception
    {
        const char *what() const throw();
    };
    void toInt(std::string s);
    void toChar(std::string s);
    void toFloat(std::string s);
    void convert(std::string s);
    void toDouble(std::string s);
    
};

#endif