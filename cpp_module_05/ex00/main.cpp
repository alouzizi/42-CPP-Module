/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 06:27:01 by alouzizi          #+#    #+#             */
/*   Updated: 2023/06/14 12:30:34 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		/* do some stuff with bureaucrats */
		Bureaucrat bureaucrat1("bureaucrat1", 1);
		std::cout << bureaucrat1;
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
		Bureaucrat bureaucrat2("bureaucrat1", 150);
		bureaucrat2.decrement();
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
		Bureaucrat bureaucrat3("bureaucrat3", 0);
		bureaucrat3.decrement();
		std::cout << bureaucrat3.getGrade() << "\n"; 
	}
	catch (std::exception & e)
	{
		/* handle exception */
		std::cout<<e.what()<< std::endl;
	}
}
