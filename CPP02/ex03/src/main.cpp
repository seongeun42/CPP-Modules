/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:58:00 by seongele          #+#    #+#             */
/*   Updated: 2022/07/06 13:56:18 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	// 생성자 테스트
	std::cout << "***** 생성자 테스트 *****\n";
	Point a, b(4, 0), c(0, 4), d(b);

	std::cout << "디폴트 생성자	: " << "a: " << &a << ", " << a << std::endl;
	std::cout << "float 생성자	: " << "b: " << &b << ", " << b << std::endl;
	std::cout << "float 생성자	: " << "c: " << &c << ", " << c << std::endl;
	std::cout << "복사 생성자	: " << "d: " << &d << ", " << d << std::endl;

	
	// 대입 연산자 오버로딩 테스트
	std::cout << "\n\n***** 대입 연산자 오버로딩 *****\n";
	a = b;
	std::cout << "a: " << &a << ", " << a << std::endl;


	// 삼각형 내부의 점 판별 테스트
	std::cout << "\n\n***** 삼각형 내부의 점 판별 함수 bsp 테스트 *****\n";

	Point e(0, 0);
	Point target1(2, 1);
	Point target2(5, 1);

	std::cout << "(0, 0), (4, 0), (0, 4)를 꼭짓점으로 가지는 삼각형이 있을 때,\n";
	if (bsp(e, b, c, target1))
		std::cout << target1 << "은 삼각형 내부의 점입니다!\n";
	else
		std::cout << target1 << "은 삼각형 내부의 점이 아닙니다!\n";

	if (bsp(e, b, c, target2))
		std::cout << target2 << "은 삼각형 내부의 점입니다!\n";
	else
		std::cout << target2 << "은 삼각형 내부의 점이 아닙니다!\n";
	
	return 0;
}