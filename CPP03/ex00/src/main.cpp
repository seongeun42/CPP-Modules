/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:43:44 by seongele          #+#    #+#             */
/*   Updated: 2022/06/16 20:43:44 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "===== ClapTrap 생성자 & 할당 연산자 오버로딩 테스트 =====" << std::endl;
	ClapTrap one;
	one.printStatus();
	ClapTrap two("two");
	two.printStatus();
	ClapTrap tmp(one);
	tmp.printStatus();


	std::cout << "\n===== ClapTrap 멤버 함수 테스트 =====" << std::endl;
	std::cout << "** attack 테스트 **" << std::endl;
	one.attack("ZOMBIE");
	one.printStatus();
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.attack("Someone");
	two.printStatus();

	std::cout << "\n** takeDamage 테스트 **" << std::endl;
	one.takeDamage(5);
	one.printStatus();
	two.takeDamage(15);
	two.printStatus();

	std::cout << "\n** beRepaired 테스트 **" << std::endl;
	one.beRepaired(3);
	one.printStatus();
	one.beRepaired(8);
	one.printStatus();
	two.beRepaired(5);
	two.printStatus();

	std::cout << std::endl;
	
	return 0;
}