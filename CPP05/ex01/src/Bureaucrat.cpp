/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:40:36 by seongele          #+#    #+#             */
/*   Updated: 2022/06/28 16:40:36 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name_("nonamed"), grade_(150)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	std::cout << "Bureaucrat Parameter Constructor called" << std::endl;
	if (grade < GRADE_MAX)
		throw GradeTooHighException();
	if (grade > GRADE_MIN)
		throw GradeTooLowException();
	grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : name_(b.getName()), grade_(b.getGrade())
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	std::cout << "Bureaucrat Allocation Overloading called" << std::endl;

	if (this == &b)
		return *this;

	const_cast<std::string&>(name_) = b.getName();
	grade_ = b.getGrade();

	return *this;
}

const std::string& Bureaucrat::getName() const
{
	return name_;
}

const int& Bureaucrat::getGrade() const
{
	return grade_;
}

void Bureaucrat::incrementGrade()
{
	if (grade_ < GRADE_MAX + 1)
		throw GradeTooHighException();
	--grade_;
}

void Bureaucrat::decrementGrade()
{
	if (grade_ > GRADE_MIN - 1)
		throw GradeTooLowException();
	++grade_;
}

void Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << name_ << " signed " << form.getName() << "." << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << name_ << " couldn’t sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat's grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat's grade is too low";
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& b)
{
	return os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
}
