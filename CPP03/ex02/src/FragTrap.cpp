/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 00:24:42 by seongele          #+#    #+#             */
/*   Updated: 2022/06/17 00:24:42 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default Constructor called : " << name_ << std::endl;
	hit_ = 100;
	energy_ = 100;
	damage_ = 30;
	max_hp_ = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor for name called : " << name_ << std::endl;
	hit_ = 100;
	energy_ = 100;
	damage_ = 30;
	max_hp_ = 100;
}

FragTrap::FragTrap(const FragTrap& ft) : ClapTrap(ft)
{
	std::cout << "FragTrap Copy Constructor called : " << name_ << std::endl;
	*this = ft;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called : " << name_ << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ft)
{
	std::cout << "FragTrap Assignment Operator called : " << name_ << std::endl;

	name_ = ft.name_;
	hit_ = ft.hit_;
	energy_ = ft.energy_;
	damage_ = ft.damage_;
	
	return *this;
}

void FragTrap::highFivesGuys()
{
	if (hit_ == 0)
		std::cout << "☠️  FragTrap " << name_ << "은(는) 이미 사망했다.. 하이파이브 못 한다... ☠️" << std::endl;
	else
		std::cout << "🙌  FragTrap " << name_ << "와 하이파이브 하고 싶은 사람? HIGH FIVE GUYS~~!! 🙌" << std::endl;
}

void FragTrap::printStatus()
{
	std::cout << "\e[33mFragTrap Status [ name: " << name_ << ", hit: " << hit_
		<< ", engergy: " << energy_ << ", damage: " << damage_ << " ]\e[0m\n";
}