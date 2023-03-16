/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:50:40 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/22 00:37:06 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	From::From("PresidentialPardonForm", 25, 5);
	std::cout << "PresidentialPardonForm Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
{
	*this = other;
	std::cout << "PresidentialPardonForm Copy constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm &operator=(PresidentialPardonForm const &other)
{
	if (this != &other)
		_target = other._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > _gradeToExecute)
		throw(Form::GradeTooLowException());
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox\n";
}