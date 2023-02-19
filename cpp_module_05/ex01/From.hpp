/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   From.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:03:28 by alouzizi          #+#    #+#             */
/*   Updated: 2023/02/19 22:36:38 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROM_HPP
#define FROM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class From
{
	const std::string _name;
	bool _signed;
	const int _sign_grade;
	const int _exec_grade;

public:
	From();
	From(std::string name, int sign_grade, int exec_grade);
	From(const From &other);
	~From();
	From &operator=(const From &other);
	const std::string& getName() const;
	bool isSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	void beSigned(Bureaucrat &other);
};

std::ostream &operator<<(std::ostream &out, From const &in);
#endif
