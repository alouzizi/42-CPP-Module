/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:57:43 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/21 10:29:59 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data ob(1337);
	Data *originalPtr = &ob;
	uintptr_t serialPtr = Serializer::serialize(originalPtr);
	Data *deserialPtr = Serializer::deserialize(serialPtr);
	if (deserialPtr == originalPtr)
	{
		std::cout << "Serialization and deserialization successful!\n";
		std::cout << "Original Pointer: " << originalPtr << std::endl;
		std::cout << "Deserialized Pointer: " << deserialPtr << std::endl;
		std::cout << deserialPtr->value << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed!\n";
}