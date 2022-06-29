/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:40:43 by seongele          #+#    #+#             */
/*   Updated: 2022/06/28 16:40:43 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern intern;
	Form* rrf;
	Form* ppf;
	Form* scf;

	std::cout << "\e[31m========== 인턴 실패 테스트 ==========\e[0m" << std::endl;
	intern.makeForm("nothing", "Babo");

	std::cout << "\n\e[32m========== 인턴 성공 테스트 ==========\e[0m" << std::endl;
	rrf = intern.makeForm("robotomy request", "Babo");
	ppf = intern.makeForm("presidential pardon", "Babo");
	scf = intern.makeForm("shrubbery creation", "Babo");

	std::cout << std::endl;
	delete rrf;
	delete ppf;
	delete scf;

	return 0;
}