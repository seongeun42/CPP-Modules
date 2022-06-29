/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 03:36:19 by seongele          #+#    #+#             */
/*   Updated: 2022/06/30 03:36:19 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern&)
{
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern&)
{
	return *this;
}

static Form* makePPF(const std::string& t)
{
	return new PresidentialPardonForm(t);
}

static Form* makeRRF(const std::string& t)
{
	return new RobotomyRequestForm(t);
}

static Form* makeSCF(const std::string& t)
{
	return new ShrubberyCreationForm(t);
}

Form* Intern::makeForm(std::string type, std::string target)
{
	std::string forms[FORM_CNT] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form* (*func[FORM_CNT])(const std::string& t) = {&makePPF, &makeRRF, &makeSCF};
	
	try
	{
		for (int i = 0; i < FORM_CNT; i++)
		{
			if (forms[i] == type)
			{
				std::cout << "\e[32mIntern create " << forms[i] << "\e[0m" << std::endl;
				return func[i](target);
			}
		}
		
		throw NotFoundMatchTypeException();
	}
	catch (std::exception& e)
	{
		std::cout << "\e[31m" << e.what() << " : " << type << "\e[0m" << std::endl;
	}
	return NULL;
}

const char* Intern::NotFoundMatchTypeException::what() const throw()
{
	return "intern can't found matching form";
}
