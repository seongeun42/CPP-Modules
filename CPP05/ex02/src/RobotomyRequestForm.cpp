/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:39:22 by seongele          #+#    #+#             */
/*   Updated: 2022/06/29 01:39:22 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("rrf", R_SIGN, R_EXEC), target_("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("rrf", R_SIGN, R_EXEC), target_(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf) : Form(rrf), target_(rrf.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
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
	try
	{
		isExecutable(executor);

		std::cout << "Drrrrrrrriiiiiillllllllllll.............. (50\% processing)" << std::endl;
		srand(time(NULL));
		int success = rand() % 100;
		if (success < 50)
			std::cout << "\e[31m💥 " << target_ << " failed to robotize!\e[0m" << std::endl;
		else
			std::cout << "\e[32m💐 " << target_ << " successfully robotized!\e[0m" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "\e[31mRobotomyRequestForm execution failed because " << e.what() << "\e[0m" << std::endl;
		return;
	}
}