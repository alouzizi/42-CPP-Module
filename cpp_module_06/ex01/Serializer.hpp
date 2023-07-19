/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:57:46 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/19 14:52:57 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <cstdint>

class Data
{
public:
    int value;
    Data(int val);
};

class Serializer
{
private:
public:
    // Serializer();
    // ~Serializer();
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif