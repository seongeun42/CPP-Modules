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

int main()
{
	Bureaucrat b1 = Bureaucrat("one", 1);
	Bureaucrat b2 = Bureaucrat("two", 150);

	try
	{
		std::cout << "\n\e[32m========== 등급 증감 테스트 ==========\e[0m" << std::endl;

		std::cout << "* before *" << std::endl;
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		b1.decrementGrade();
		b2.incrementGrade();

		std::cout << "* after *" << std::endl;
		std::cout << "감소 : " << b1 << std::endl;
		std::cout << "증가 : " << b2 << std::endl;


		std::cout << "\n\e[31m========== 등급 감소 에러 테스트 ==========\e[0m" << std::endl;
		b2.decrementGrade();
		b2.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n\e[31m========== 등급 증가 에러 테스트 ==========\e[0m" << std::endl;
		b1.incrementGrade();
		b1.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std:: endl;

	return 0;
}