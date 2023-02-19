/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:36:17 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/19 22:14:13 by alouzizi         ###   ########.fr       */
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
	{
		// *this = other;
		_grade = other._grade;	
	}
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

void  Bureaucrat::signForm(From &other) const
{
	if (other.isSigned())
		std::cout << *this << " signed " << other;
	else
		std::cout << *this << " couldn’t sign " << other << " because GradeTooLow \n";
}