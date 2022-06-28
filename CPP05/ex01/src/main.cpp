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

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b1 = Bureaucrat("one", 1);
	Bureaucrat b2 = Bureaucrat("two", 150);
	Form f = Form("Eat Chicken", 50, 50);

	try
	{
		std::cout << "\n\e[31m========== 폼 생성 실패 테스트 1 (High) ==========\e[0m" << std::endl;
		Form fail1 = Form("High", 0, 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\e[31m========== 폼 생성 실패 테스트 2 (Low) ==========\e[0m" << std::endl;
		Form fail2 = Form("Low", 151, 151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\e[32m========== 사인 테스트 ==========\e[0m" << std::endl;

	std::cout << "* Info *" << std::endl;
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << f << std::endl;

	std::cout << "\e[31m* 사인 실패 테스트 *\e[0m" << std::endl;
	b2.signForm(f);
	std::cout << f << std::endl;

	std::cout << "\n\e[34m* 사인 성공 테스트 *\e[0m" << std::endl;
	b1.signForm(f);
	std::cout << f << std::endl;


	
	std::cout << std:: endl;

	return 0;
}