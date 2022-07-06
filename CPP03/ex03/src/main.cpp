/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:43:44 by seongele          #+#    #+#             */
/*   Updated: 2022/07/06 19:26:06 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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



	{
		std::cout << "\n\n\e[30m\e[43m##### FragTrap TEST #####\e[0m" << std::endl;
		std::cout << "===== FragTrap 생성자 & 할당 연산자 오버로딩 테스트 =====" << std::endl;
		FragTrap frag_one;
		frag_one.printStatus();
		FragTrap frag_two("frag_two");
		frag_two.printStatus();
		FragTrap frag_tmp(frag_two);
		frag_tmp.printStatus();


		std::cout << "\n===== FragTrap 멤버 함수 테스트 =====" << std::endl;
		std::cout << "** attack 테스트 **" << std::endl;
		frag_one.attack("ZOMBIE");
		frag_one.printStatus();
		frag_two.attack("Someone");
		frag_two.attack("Someone");
		frag_two.printStatus();

		std::cout << "\n** takeDamage 테스트 **" << std::endl;
		frag_one.takeDamage(5);
		frag_one.printStatus();
		frag_two.takeDamage(20);
		frag_two.printStatus();
		frag_two.takeDamage(80);
		frag_two.printStatus();

		std::cout << "\n** beRepaired 테스트 **" << std::endl;
		frag_one.beRepaired(3);
		frag_one.printStatus();
		frag_one.beRepaired(8);
		frag_one.printStatus();
		frag_two.beRepaired(5);
		frag_two.printStatus();

		std::cout << "\n** highFivesGuys 테스트 **" << std::endl;
		frag_one.highFivesGuys();
		frag_one.highFivesGuys();
		frag_two.highFivesGuys();

		std::cout << std::endl;
	}



	{
		std::cout << "\n\n\e[30m\e[44m##### DiamondTrap TEST #####\e[0m" << std::endl;
		std::cout << "===== DiamondTrap 생성자 & 할당 연산자 오버로딩 테스트 =====" << std::endl;
		DiamondTrap dia_one;
		dia_one.printStatus();
		DiamondTrap dia_two("dia_two");
		dia_two.printStatus();
		DiamondTrap dia_tmp(dia_two);
		dia_tmp.printStatus();


		std::cout << "\n===== DiamondTrap 멤버 함수 테스트 =====" << std::endl;
		std::cout << "** attack 테스트 **" << std::endl;
		dia_one.attack("ZOMBIE");
		dia_one.printStatus();
		dia_two.attack("Someone");
		dia_two.attack("Someone");
		dia_two.printStatus();

		std::cout << "\n** takeDamage 테스트 **" << std::endl;
		dia_one.takeDamage(5);
		dia_one.printStatus();
		dia_two.takeDamage(20);
		dia_two.printStatus();
		dia_two.takeDamage(80);
		dia_two.printStatus();

		std::cout << "\n** beRepaired 테스트 **" << std::endl;
		dia_one.beRepaired(3);
		dia_one.printStatus();
		dia_one.beRepaired(8);
		dia_one.printStatus();
		dia_two.beRepaired(5);
		dia_two.printStatus();

		std::cout << "\n** whoAmI 테스트 **" << std::endl;
		dia_one.whoAmI();
		dia_two.whoAmI();

		std::cout << std::endl;
	}
	
	return 0;
}