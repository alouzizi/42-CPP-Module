/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:58:54 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/22 00:59:29 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	From::From("ShrubberyCreationForm", 145, 137);
	std::cout << "ShrubberyCreationForm Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	_traget = target;
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

ShrubberyCreationForm::ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
		_target = other._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (isSigned() == false)
		throw(Form::FormNotSignedException());
	else if (executor.getGrade() > _gradeToExecute)
		throw(Form::GradeTooLowException());
	std::ofstream file(_target + "_shrubbery");
	file << "\033[31"<< std::endl;
	file << "     	        ||" << std::endl;
	file << "              /**\\" << std::endl;
	file << "             /A$$A\\" << std::endl;
	file << "            /A$$$$A\\" << std::endl;
	file << "           /A$$$$$$A\\" << std::endl;
	file << "          /A$$$$$$$$A\\" << std::endl;
	file << "         /A$$$$$$$$$$A\\" << std::endl;
	file << "        /A$$$$Ali$$$$$A\\" << std::endl;
	file << "       /A$$$LOUZIZI$$$$A\\"<< std::endl;
	file << "      /A$$$$alouzizi$$$$A\\" << std::endl;
	file << "     /A$$$$$$$$$$$$$$$$$$A\\" << std::endl;
	file << "    /A$$$$$$$$$$$$$$$$$$$$A\\" << std::endl;
	file << "   /A$$$$$$$$$$$$$$$$$$$$$$A\\" << std::endl;
	file << "  /A$$$$$$&&$$$$$$$$$&&$$$$$A\\" << std::endl;
	file << " /A$$$$$$$$$$$$$$$$$$$$$$$$$$A\\" << std::endl;
	file << "              $$$" << std::endl;
	file << "     	       $$$" << std::endl;
	file << "              $$$" << std::endl;
	file << "     	       $$$" << std::endl;
	file << "              $$$" << std::endl;
	file << "     	       $$$" << std::endl;
	file << "              $$$" << std::endl;
	file << "     	       $$$" << std::endl;
	file << "              $$$" << std::endl;
	file << "     	       $$$\033[0m" << std::endl;
}