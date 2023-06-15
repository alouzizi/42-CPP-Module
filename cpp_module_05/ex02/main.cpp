/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:23:43 by alouzizi          #+#    #+#             */
/*   Updated: 2023/06/15 23:05:18 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("ali", 10);
		PresidentialPardonForm presidentform("President");
		RobotomyRequestForm robotomyform("Robotomy");
		ShrubberyCreationForm shrubberyform("HOME");

		std::cout << "<--------- Test 1 --------->\n";
		bureaucrat.signForm(presidentform);
		bureaucrat.excuteForm(presidentform);
		shrubberyform.execute(bureaucrat);
		std::cout << "<--------- Test 2 --------->\n";
		bureaucrat.signForm(robotomyform);
		bureaucrat.excuteForm(robotomyform);
		shrubberyform.execute(bureaucrat);
		std::cout << "<--------- Test 3 --------->\n";;
		bureaucrat.signForm(shrubberyform);
		bureaucrat.excuteForm(shrubberyform);
		shrubberyform.execute(bureaucrat);
		std::cout << "<--------- ------ --------->\n";
	}
	catch (std::exception & e)
	{
		/* handle exception */
		std::cout<<e.what()<< std::endl;
	}
	return (0);
}