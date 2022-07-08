/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 02:56:34 by seongele          #+#    #+#             */
/*   Updated: 2022/07/08 16:12:51 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), name_("nonamed")
{
	std::cout << "DiamondTrap Default Constructor called : " << name_ << std::endl;
	ClapTrap::name_ += "_clap_name";
	hit_ = FragTrap::hit_;
	energy_ = ScavTrap::energy_;
	damage_ = FRAG_ATTACK_DAMAGE;
	max_hp_ = 100;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(), ScavTrap(), name_(name)
{
	std::cout << "DiamondTrap Constructor for name called : " << name_ << std::endl;
	ClapTrap::name_ += "_clap_name";
	hit_ = FragTrap::hit_;
	energy_ = ScavTrap::energy_;
	damage_ = FRAG_ATTACK_DAMAGE;
	max_hp_ = 100;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt) : ClapTrap(dt), FragTrap(dt), ScavTrap(dt)
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