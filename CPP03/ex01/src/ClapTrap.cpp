/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:43:40 by seongele          #+#    #+#             */
/*   Updated: 2022/06/16 20:43:40 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("nonamed"), hit_(10), energy_(10), damage_(0), max_hp_(10)
{
	std::cout << "ClapTrap Default Constructor called : " << name_ << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name_(name), hit_(10), energy_(10), damage_(0), max_hp_(10)
{
	std::cout << "ClapTrap Constructor for name called : " << name_ << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	std::cout << "ClapTrap Copy Constructor called : " << ct.name_ << std::endl;
	*this = ct;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called : " << name_ << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
	std::cout << "ClapTrap Assignment Operator called : " << ct.name_ << std::endl;
	
	name_ = ct.name_;
	hit_ = ct.hit_;
	energy_ = ct.energy_;
	damage_ = ct.damage_;
	
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_ == 0)
		std::cout << "☠️ ClapTrap " << name_ << "은(는) 이미 사망했다 ☠️" << std::endl;
	else if (energy_ == 0)
		std::cout << "🚨 ClapTrap " << name_ << "은(는) energy points가 부족하다...! 🚨" << std::endl;
	else
	{
		std::cout << "⚡️ ClapTrap " << name_ << "가 " << target << "을 공격!, "
			<< target <<"은(는) " << damage_ << "의 데미지를 입었다! ⚡️" << std::endl;
		energy_--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_ == 0)
		std::cout << "☠️  ClapTrap " << name_ << "은(는) 이미 사망 ☠️" << std::endl;
	else
	{
		std::cout << "💥 ClapTrap " << name_ << "은(는) " << amount << "의 데미지를 받았다! 💥" << std::endl;
		if (hit_ < amount)
			hit_ = 0;
		else
			hit_ -= amount;
		if (hit_ == 0)
			std::cout << "⚰️  ClapTrap " << name_ << "은(는) 죽고 말았다... 안녕... ⚰️" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_ == 0)
		std::cout << "☠️  ClapTrap " << name_ << "은(는) 이미 사망했다 ☠️" << std::endl;
	else if (energy_ == 0)
		std::cout << "🚨 ClapTrap " << name_ << "은(는) energy points가 부족하다...! 🚨" << std::endl;
	else
	{
		std::cout << "💖 ClapTrap " << name_ << "은(는) " << amount << "의 hp를 회복했다! 💖" << std::endl;
		if (amount > max_hp_ - hit_)
			hit_ = max_hp_;
		else
			hit_ += amount;
		energy_--;
	}

}

void ClapTrap::printStatus()
{
	std::cout << "\e[36mClapTrap Status [ name: " << name_ << ", hit: " << hit_
		<< ", engergy: " << energy_ << ", damage: " << damage_ << " ]\e[0m\n";
}