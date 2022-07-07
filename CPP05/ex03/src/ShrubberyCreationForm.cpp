/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:39:27 by seongele          #+#    #+#             */
/*   Updated: 2022/07/07 15:05:26 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("scf", S_SIGN, S_EXEC), target_("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("scf", S_SIGN, S_EXEC), target_(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) : Form(scf), target_(scf.getTarget())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf)
{
	if (this == &scf)
		return *this;

	target_ = scf.getTarget();

	return *this;
}

const std::string& ShrubberyCreationForm::getTarget() const
{
	return target_;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	this->isExecutable(executor);
		
	std::ofstream ofs;
	std::string file = target_ + "_shrubbery";
	ofs.open(file.c_str(), std::ios::out | std::ios::trunc);
	if (ofs.fail())
	{
		std::cerr << "\e[31m" << target_ << "_shrubbery open failed!\e[0m" << std::endl;
		return;
	}

	std::string tree = "          .     .  .      +     .      .          .\n"
						"     .       .      .     #       .           .\n"
						"        .      .         ###            .      .      .\n"
						"      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
						"          .      . \"####\"###\"####\"  .\n"
						"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
						"  .             \"#########\"#########\"        .        .\n"
						"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
						"     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
						"                .\"##\"#####\"#####\"##\"           .      .\n"
						"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
						"      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
						"    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
						"            .     \"      000      \"    .     .\n"
						"       .         .   .   000     .        .       .\n"
						".. .. ..................O000O........................ ...... ...\n";

	ofs << tree;
	ofs.close();

	std::cout << "\e[32mShrubberyCreationForm planted tree on the " << target_ << ".\e[0m" << std::endl;
}
