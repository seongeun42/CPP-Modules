/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:51:37 by seongele          #+#    #+#             */
/*   Updated: 2022/06/28 23:51:37 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name_("nonamed"), isSigned_(false), signGrade_(150), execGrade_(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const std::string name, int signGrade, int execGrade) : name_(name), isSigned_(false)
{
	std::cout << "Form Parameter Constructor called" << std::endl;
	if (signGrade < GRADE_MAX || execGrade < GRADE_MAX)
		throw GradeTooHighException();
	if (signGrade > GRADE_MIN || execGrade > GRADE_MIN)
		throw GradeTooLowException();
	signGrade_ = signGrade;
	execGrade_ = execGrade;
}

Form::Form(const Form& f) : name_(f.getName()), isSigned_(f.getIsSigned()), signGrade_(f.getSignGrade()), execGrade_(f.getExecGrade())
{
	std::cout << "Form Copy Constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form& Form::operator=(const Form& f)
{
	std::cout << "Form Allocation Overloading called" << std::endl;

	if (this == &f)
		return *this;

	const_cast<std::string&>(name_) = f.getName();
	isSigned_ = f.getIsSigned();
	signGrade_ = f.getSignGrade();
	execGrade_ = f.getExecGrade();

	return *this;
}

const std::string& Form::getName() const
{
	return name_;
}

const bool& Form::getIsSigned() const
{
	return isSigned_;
}

const int& Form::getSignGrade() const
{
	return signGrade_;
}

const int& Form::getExecGrade() const
{
	return execGrade_;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > signGrade_)
		throw GradeTooLowException();
	isSigned_ = true;
}

void Form::isExecutable(const Bureaucrat& b) const
{
	if (!isSigned_)
		throw NotSignedException();
	if (b.getGrade() > execGrade_)
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

const char* Form::NotSignedException::what() const throw()
{
	return "form is not signed yet";
}

std::ostream& operator<<(std::ostream &os, const Form& f)
{
	return os << "Form [" << f.getName() << "] ⇾ "
		<< "isSigned(" << f.getIsSigned() << "), SignGrade(" << f.getSignGrade()
		<< "), ExecGrade(" << f.getExecGrade() << ")";
}
