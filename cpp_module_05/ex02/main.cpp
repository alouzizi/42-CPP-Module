/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:23:43 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/20 15:48:25 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		/* do some stuff with bureaucrats */
		Bureaucrat bureaucrat1("bureaucrat1", 1);
		bureaucrat1.increment();
	}
	catch (std::exception & e)
	{
		/* handle exception */
		std::cout<<e.what()<< std::endl;
	}

	std::cout << "<--------- Test 2 --------->\n";
	try
	{
		/* do some stuff with bureaucrats */
		Bureaucrat bureaucrat2("bureaucrat1", 90);
		bureaucrat2.decrement();
		From from1("from1",100,100);
		from1.beSigned(bureaucrat2);
		std::cout << from1 << "\n";
		bureaucrat2.signForm(from1);
	}
	catch (std::exception & e)
	{
		/* handle exception */
		std::cout<<e.what()<< std::endl;
	}

	std::cout << "<--------- Test 3 --------->\n";
	try
	{
		/* do some stuff with bureaucrats */
		Bureaucrat bureaucrat3("bureaucrat3", 149);
		bureaucrat3.decrement();
		std::cout << bureaucrat3.getGrade() << "\n";
		From from2("from1",100,100);
		from2.beSigned(bureaucrat3);
		std::cout << from2 << "\n";
		bureaucrat3.signForm(from2);
	}
	catch (std::exception & e)
	{
		/* handle exception */
		std::cout<<e.what()<< std::endl;
	}
}