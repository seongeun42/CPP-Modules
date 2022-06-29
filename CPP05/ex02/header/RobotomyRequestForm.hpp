/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:38:38 by seongele          #+#    #+#             */
/*   Updated: 2022/06/29 01:38:38 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>
#include <cstdlib>

#define R_SIGN 72
#define R_EXEC 45

class RobotomyRequestForm : public Form
{
private:
	std::string target_;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& rrf);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& rrf);

	const std::string& getTarget() const;

	void execute(Bureaucrat const& executor) const;
};

#endif