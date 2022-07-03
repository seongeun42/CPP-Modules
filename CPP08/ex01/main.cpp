/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:22:24 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 17:22:24 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		std::cout << "========== Default Test ==========" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "\n========== Massive Test ==========" << std::endl;
		Span sp = Span(15000);

		std::vector<int> v;
		for (int i = 1; i <= 15000; i++)
			v.push_back(i * 2);

		sp.addNumbers(v.begin(), v.end());

		// 2, 4, 6, 8, ... , 30000
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "\n========== Error Test ==========" << std::endl;
		Span sp = Span(1);

		try
		{
			// 최대 저장 수 오버
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		try
		{
			// 원소가 1개라 Span을 찾을 수 없음
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}