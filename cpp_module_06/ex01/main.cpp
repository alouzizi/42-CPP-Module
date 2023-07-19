/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:57:43 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/19 14:55:51 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data data_object(1337);
	Data *original_ptr = &data_object;
	uintptr_t serialized_ptr = Serializer::serialize(original_ptr);
	Data *deserialized_ptr = Serializer::deserialize(serialized_ptr);
	if (deserialized_ptr == original_ptr)
	{
		std::cout << "Serialization and deserialization successful!\n";
		std::cout << "Original Pointer: " << original_ptr << std::endl;
		std::cout << "Deserialized Pointer: " << deserialized_ptr << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed!\n";
}