/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:51:28 by seongele          #+#    #+#             */
/*   Updated: 2022/06/28 23:51:28 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string name_;
	bool isSigned_;
	int signGrade_;
	int execGrade_;

public:
	Form();
	Form(const std::string name, int signGrade, int execGrade);
	Form(const Form& f);
	~Form();
	Form& operator=(const Form& f);

	const std::string& getName() const;
	const bool& getIsSigned() const;
	const int& getSignGrade() const;
	const int& getExecGrade() const;

	void beSigned(const Bureaucrat& b);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream &os, const Form& f);

#endif