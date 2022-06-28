/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:40:23 by seongele          #+#    #+#             */
/*   Updated: 2022/06/28 16:40:23 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define GRADE_MIN 150
#define GRADE_MAX 1

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string name_;
	int grade_;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& b);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& b);

	const std::string& getName() const;
	const int& getGrade() const;

	void incrementGrade();
	void decrementGrade();

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

std::ostream& operator<<(std::ostream &os, const Bureaucrat& b);

#endif