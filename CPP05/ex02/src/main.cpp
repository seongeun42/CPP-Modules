/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:40:43 by seongele          #+#    #+#             */
/*   Updated: 2022/07/07 15:11:17 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat p("PPF", 1);
	Bureaucrat r("RRF", 40);
	Bureaucrat s("SCF", 130);
	Bureaucrat n("NO", 150);
	ShrubberyCreationForm sf("home");
	RobotomyRequestForm rf("Humy");
	PresidentialPardonForm pf("You");

	std::cout << "\n\e[31m========== ShrubberyCreationForm 실패 테스트 ==========\e[0m" << std::endl;
	s.executeForm(sf); // 사인 되지 않은 상태라 실패
	s.signForm(sf);
	n.executeForm(sf);	// 실행 권한 등급보다 낮아서 실패

	std::cout << "\n\e[32m========== ShrubberyCreationForm 성공 테스트 ==========\e[0m" << std::endl;
	s.executeForm(sf);	// 성공

	std::cout << "\n\e[31m========== RobotomyRequestForm 실패 테스트 ==========\e[0m" << std::endl;
	r.executeForm(rf);	// 사인 되지 않은 상태라 실패
	r.signForm(rf);
	n.executeForm(rf);	// 실행 권한 등급보다 낮아서 실패

	std::cout << "\n\e[32m========== RobotomyRequestForm 성공 테스트 ==========\e[0m" << std::endl;
	r.executeForm(rf);

	std::cout << "\n\e[31m========== PresidentialPardonForm 실패 테스트 ==========\e[0m" << std::endl;
	p.executeForm(pf);	// 사인 되지 않은 상태라 실패
	p.signForm(pf);
	n.executeForm(pf);	// 실행 권한 등급보다 낮아서 실패

	std::cout << "\n\e[32m========== PresidentialPardonForm 성공 테스트 ==========\e[0m" << std::endl;
	p.executeForm(pf);

	std::cout << std:: endl;

	return 0;
}