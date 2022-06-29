/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 03:36:10 by seongele          #+#    #+#             */
/*   Updated: 2022/06/30 03:36:10 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#define FORM_CNT 3

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern&);
	~Intern();
	Intern& operator=(const Intern&);

	Form* makeForm(std::string type, std::string target);

	class NotFoundMatchTypeException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif