/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:00:55 by alouzizi          #+#    #+#             */
/*   Updated: 2023/07/20 14:08:21 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::srand(std::time(0));

    Base *randPtr = generate();
    identify(randPtr);
    delete randPtr;

    Base &randRef = *generate();
    identify(randRef);
}