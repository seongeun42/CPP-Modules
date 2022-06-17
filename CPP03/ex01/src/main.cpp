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

#include "ScavTrap.hpp"

int main()
{
	{
		std::cout << "\e[30m\e[46m##### ClapTrap TEST #####\e[0m" << std::endl;
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
	}

	{
		std::cout << "\n\n\e[30m\e[42m##### ScavTrap TEST #####\e[0m" << std::endl;
		std::cout << "===== ScavTrap 생성자 & 할당 연산자 오버로딩 테스트 =====" << std::endl;
		ScavTrap scav_one;
		scav_one.printStatus();
		ScavTrap scav_two("scav_two");
		scav_two.printStatus();
		ScavTrap scav_tmp(scav_two);
		scav_tmp.printStatus();


		std::cout << "\n===== ScavTrap 멤버 함수 테스트 =====" << std::endl;
		std::cout << "** attack 테스트 **" << std::endl;
		scav_one.attack("ZOMBIE");
		scav_one.printStatus();
		scav_two.attack("Someone");
		scav_two.attack("Someone");
		scav_two.printStatus();

		std::cout << "\n** takeDamage 테스트 **" << std::endl;
		scav_one.takeDamage(5);
		scav_one.printStatus();
		scav_two.takeDamage(20);
		scav_two.printStatus();
		scav_two.takeDamage(80);
		scav_two.printStatus();

		std::cout << "\n** beRepaired 테스트 **" << std::endl;
		scav_one.beRepaired(3);
		scav_one.printStatus();
		scav_one.beRepaired(8);
		scav_one.printStatus();
		scav_two.beRepaired(5);
		scav_two.printStatus();

		std::cout << "\n** guardGate 테스트 **" << std::endl;
		scav_one.guardGate();
		scav_one.guardGate();
		scav_two.guardGate();

		std::cout << std::endl;
	}
	
	return 0;
}