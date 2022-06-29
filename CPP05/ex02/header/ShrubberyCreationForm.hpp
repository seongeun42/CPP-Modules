/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:38:23 by seongele          #+#    #+#             */
/*   Updated: 2022/06/29 01:38:23 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

#define S_SIGN 145
#define S_EXEC 137

class ShrubberyCreationForm : public Form
{
private:
	std::string target_;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& scf);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);

	const std::string& getTarget() const;

	void execute(Bureaucrat const& executor) const;
};

#endif