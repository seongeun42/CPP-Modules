/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:39:41 by seongele          #+#    #+#             */
/*   Updated: 2022/07/07 15:30:26 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("ppf", P_SIGN, P_EXEC), target_("default")
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("ppf", P_SIGN, P_EXEC), target_(target)
{
	std::cout << "PresidentialPardonForm Target Constructor called : " << target_ << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf) : Form(ppf), target_(ppf.getTarget())
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ppf)
{
	if (this == &ppf)
		return *this;

	target_ = ppf.getTarget();

	return *this;
}

const std::string& PresidentialPardonForm::getTarget() const
{
	return target_;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	this->isExecutable(executor);
	std::cout << "\e[32m" << target_ << " has been pardoned by Zaphod Beeblebrox.\e[0m" << std::endl;
}