/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 00:24:42 by seongele          #+#    #+#             */
/*   Updated: 2022/06/17 00:24:42 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), keeper_(false)
{
	std::cout << "ScavTrap Default Constructor called : " << name_ << std::endl;
	hit_ = 100;
	energy_ = 50;
	damage_ = 20;
	max_hp_ = 100;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), keeper_(false)
{
	std::cout << "ScavTrap Constructor for name called : " << name_ << std::endl;
	hit_ = 100;
	energy_ = 50;
	damage_ = 20;
	max_hp_ = 100;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st)
{
	std::cout << "ScavTrap Copy Constructor called : " << name_ << std::endl;
	*this = st;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called : " << name_ << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
	std::cout << "ScavTrap Assignment Operator called : " << name_ << std::endl;

	name_ = st.name_;
	hit_ = st.hit_;
	energy_ = st.energy_;
	damage_ = st.damage_;
	keeper_ = st.keeper_;
	
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_ == 0)
		std::cout << "☠️ ScavTrap " << name_ << "은(는) 이미 사망했다 ☠️" << std::endl;
	else if (energy_ == 0)
		std::cout << "🚨 ScavTrap " << name_ << "은(는) energy points가 부족하다...! 🚨" << std::endl;
	else
	{
		std::cout << "⚡️ ScavTrap " << name_ << "가 " << target << "을 공격!, "
			<< target <<"은(는) " << damage_ << "의 데미지를 입었다! ⚡️" << std::endl;
		energy_--;
	}
}

void ScavTrap::guardGate()
{
	if (hit_ == 0)
	{
		std::cout << "☠️ ScavTrap " << name_ << "은(는) 이미 사망했다 ☠️" << std::endl;
		return;
	}
	if (!keeper_)
	{
		keeper_ = true;
		std::cout << "🛡️ ScavTrap " << name_ << "의 Gate Keeper Mode ON! 🛡️" << std::endl;
	}
	else
	{
		keeper_ = false;
		std::cout << "🛡️ ScavTrap " << name_ << "의 Gate Keeper Mode OFF... 🛡️" << std::endl;
	}
	
}

void ScavTrap::printStatus()
{
	std::cout << "\e[32mScavTrap Status [ name: " << name_ << ", hit: " << hit_
		<< ", engergy: " << energy_ << ", damage: " << damage_ << " ]\e[0m\n";
}