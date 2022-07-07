/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:39:22 by seongele          #+#    #+#             */
/*   Updated: 2022/07/07 15:30:34 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("rrf", R_SIGN, R_EXEC), target_("default")
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("rrf", R_SIGN, R_EXEC), target_(target)
{
	std::cout << "RobotomyRequestForm Target Constructor called : " << target_ << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf) : Form(rrf), target_(rrf.getTarget())
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rrf)
{
	if (this == &rrf)
		return *this;

	target_ = rrf.getTarget();

	return *this;
}

const std::string& RobotomyRequestForm::getTarget() const
{
	return target_;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	this->isExecutable(executor);

	std::cout << "Drrrrrrrriiiiiillllllllllll.............. (50\% processing)" << std::endl;
	srand(time(NULL));
	int success = rand() % 100;
	if (success < 50)
		std::cout << "\e[31m💥 " << target_ << " failed to robotize!\e[0m" << std::endl;
	else
		std::cout << "\e[32m💐 " << target_ << " successfully robotized!\e[0m" << std::endl;
}