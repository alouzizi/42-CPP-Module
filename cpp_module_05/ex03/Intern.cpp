/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:57:24 by alouzizi          #+#    #+#             */
/*   Updated: 2023/06/16 20:10:07 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor called\n";
}

Intern::Intern(const Intern &other)
{
    *this = other;
    std::cout << "Intern Copy constructor called\n";
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called\n";
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    std::cout << "Intern Copy assignment operator called\n";
    return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form *forms[3] = {  new RobotomyRequestForm(target),
                        new PresidentialPardonForm(target),
                        new ShrubberyCreationForm(target)
                    };
    while (i < 3)
    {
        if (name == names[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (forms[i]);
        }
        delete forms[i];
        i++;
    }
    std::cout << "Intern can't create " << name <<  '\n';
    return (NULL);
}