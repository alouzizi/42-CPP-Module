/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 06:27:05 by alouzizi          #+#    #+#             */
/*   Updated: 2023/06/14 12:22:06 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name)
{
	_grade = grade;
	if (_grade < 1)
		throw(GradeTooHighException());
	if (_grade > 150)
		throw(GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):_name(other._name)
{
	_grade = other._grade;
	std::cout << "Bureaucrat Copy constructor called\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		_grade = other._grade;
	std::cout << "Bureaucrat Copy assignment operator called\n";
	return (*this);
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const &in)
{
	out << in.getName() << ", bureaucrat grade  "<< in.getGrade() << "\n";
	return (out);
}

const std::string Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::increment()
{
	if (_grade - 1 < 1)
		throw(GradeTooHighException());
	_grade -= 1;
}

void Bureaucrat::decrement()
{
	if (_grade + 1 > 150)
		throw(GradeTooLowException());
	_grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: GradeTooLowException");
}
