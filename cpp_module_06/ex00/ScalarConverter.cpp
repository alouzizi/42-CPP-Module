/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:39:40 by alouzizi          #+#    #+#             */
/*   Updated: 2023/06/23 02:30:46 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
    std::cout << "ScalarConverter copy constructor called\n";
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    std::cout << "ScalarConverter copy assignment operator called\n";
    return (*this);
}

void ScalarConverter::toChar(std::string s)
{
    char c;
    
    if (s[0] == '-')
        throw(ImpossibleException());
    c = static_cast<char>(std::stoi(s));
    if (c < 32 || c > 126)
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << c << "'" <<std::endl;
}

void ScalarConverter::toInt(std::string s)
{
    int i;

    i = static_cast<int>(std::stoi(s));
    std::cout << "int: " << i << std::endl;
}

void ScalarConverter::toFloat(std::string s)
{
    float f;
    f = static_cast<float>(std::stof(s));
    if (f - static_cast<int>(f) == 0)
        std::cout << "float: " << f << ".0f" << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;
}

void ScalarConverter::toDouble(std::string s)
{
    double d;

    d = static_cast<double>(std::stod(s));
    if (d - static_cast<int>(d) == 0)
        std::cout << "double: " << d << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert(std::string s)
{
    if (s.length() == 1 && !isdigit(s[0]))
    {
        std::cout << "char: '" << s[0] << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(s[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(s[0]) << ".0" << std::endl;
    }
    else
    {
        try
        {
            if (s.length() > 1)
            {
                int i = 0;
                while(((size_t) i) <  s.length())
                {
                    if (!isdigit(s[i]) && s[i] != '.' && s[i] != 'f')
                        throw(ImpossibleException());
                    i++;
                }
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n'; 
        }
        try
        {  
            toChar(s);
        }
        catch(const std::exception& e)
        {
            std::cerr << "char: impossible" << '\n';
        }
        try
        {  
            toInt(s);
        }
        catch(const std::exception& e)
        {
            std::cerr << "int: impossible" << '\n';
        }

        try
        {
            toFloat(s);
        }
        catch(const std::exception& e)
        {
            std::cerr << "float: impossible" << '\n';
        }
        try
        {
            toDouble(s);
        }
        catch(const std::exception& e)
        {
            std::cerr << "double: impossible" << '\n';
        }
    }
}

const char *ScalarConverter::ImpossibleException::what() const throw()
{
    // return ("impossible");

    return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
}