/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   From.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:03:23 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/19 22:42:04 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "From.hpp"

From::From() : _sign_grade(0), _exec_grade(0)
{
	_signed = false;
	std::cout << "From Default constructor called\n";
}

From::From(std::string name, int sign_grade, int exec_grade):_name(name),_sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_exec_grade < 1 || _sign_grade < 1)
		throw(GradeTooHighException());
	if (_exec_grade > 150 || _sign_grade > 150)
		throw(GradeTooLowException());
				
}

From::From(const From &other) : _sign_grade(0), _exec_grade(0)
{
	*this = other;
	std::cout << "From Copy constructor called\n";
}

From::~From()
{
	std::cout << "From Destructor called\n";
}

From &From::operator=(const From &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, From const &in)
{
	out << "Form: " << in.getName() << ", Signed: " << in.isSigned()
		<< ", Grade sing: " << in.getSignGrade()
		<< ", Grade exec: " << in.getExecGrade();
	return (out);
}

const std::string &From::getName() const
{
	return (_name);
}

bool From::isSigned() const
{
	return (_signed);
}

int From::getSignGrade() const
{
	return (_sign_grade);
}

int From::getExecGrade() const
{
	return (_exec_grade);
}

const char *From::GradeTooHighException::what() const throw()
{
	return ("Error: GradeTooHighException");
}

const char *From::GradeTooLowException::what() const throw()
{
	return ("Error: GradeTooLowException");
}

void From::beSigned(Bureaucrat &other)
{
	if (other.getGrade() <= _sign_grade)
		_signed = true;
	else
		throw(GradeTooLowException());
}