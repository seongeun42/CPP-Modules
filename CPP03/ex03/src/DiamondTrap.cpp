/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 02:56:34 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 02:56:34 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name_("nonamed_dia")
{
	std::cout << "DiamondTrap Default Constructor called : " << name_ << std::endl;
	ClapTrap::name_ += "_clap";
	hit_ = FragTrap::hit_;
	energy_ = ScavTrap::energy_;
	damage_ = FragTrap::damage_;
	max_hp_ = 100;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(), FragTrap(), name_(name)
{
	std::cout << "DiamondTrap Constructor for name called : " << name_ << std::endl;
	ClapTrap::name_ += "_clap";
	hit_ = FragTrap::hit_;
	energy_ = ScavTrap::energy_;
	damage_ = FragTrap::damage_;
	max_hp_ = 100;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt) : ClapTrap(dt), ScavTrap(dt), FragTrap(dt)
{
	std::cout << "DiamondTrap Copy Constructor called : " << dt.name_ << std::endl;
	*this = dt;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called : " << name_ << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& dt)
{
	std::cout << "DiamondTrap Assignment Operator called : " << dt.name_ << std::endl;

	name_ = dt.name_;
	hit_ = dt.hit_;
	energy_ = dt.energy_;
	damage_ = dt.damage_;
	
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (hit_ == 0)
		std::cout << "☠️  DiamondTrap " << name_ << "은(는) 이미 사망했다.. 자기소개 못 한다... ☠️" << std::endl;
	else
		std::cout << "📢  DiamondTrap's name : " << name_ << ", ClapTrap's name : " << ClapTrap::name_ << " 📢" << std::endl;
}

void DiamondTrap::printStatus()
{
	std::cout << "\e[34mDiamondTrap Status [ name: " << name_ << ", hit: " << hit_
		<< ", engergy: " << energy_ << ", damage: " << damage_ << " ]\e[0m\n";
}