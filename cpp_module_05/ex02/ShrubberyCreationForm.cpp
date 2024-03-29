/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:58:54 by alouzizi          #+#    #+#             */
/*   Updated: 2023/06/15 23:01:35 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
{
	*this = other;
	std::cout << "ShrubberyCreationForm Copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
		_target = other._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	// if (isSigned() == false)
	// 	throw(Form::FormNotSignedException());
	std::cout << executor.getGrade() << "]"<< getExecGrade() << "\n";
	 if (executor.getGrade() > getExecGrade())
		throw(Form::GradeTooLowException());
	std::ofstream file(_target + "_shrubbery");

    file << "        *" << std::endl;
    file << "       ***" << std::endl;
    file << "      *****" << std::endl;
    file << "     *******" << std::endl;
    file << "    *********" << std::endl;
    file << "   ***********" << std::endl;
    file << "  *************" << std::endl;
    file << " ***************" << std::endl;
    file << "*****************" << std::endl;
    file << "       ***" << std::endl;
    file << "       ***" << std::endl;
	file.close();
}