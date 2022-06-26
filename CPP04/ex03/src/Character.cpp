/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:11:41 by seongele          #+#    #+#             */
/*   Updated: 2022/06/21 00:11:41 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name_("nonamed")
{
	for (int i = 0; i < 4; i++)
		slot_[i] = NULL;
}

Character::Character(std::string name) : name_(name)
{
	for (int i = 0; i < 4; i++)
		slot_[i] = NULL;
}

Character::Character(const Character& c) : name_(c.getName())
{
	for (int i = 0; i < 4; i++)
		slot_[i] = c.copySlot(i);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (slot_[i])
		{
			delete slot_[i];
			slot_[i] = NULL;
		}
		
	}
}

Character& Character::operator=(const Character& c)
{
	if (this == &c)
		return *this;

	name_ = c.getName();
	for (int i = 0; i < 4; i++)
	{
		if (slot_[i])
			delete slot_[i];
		slot_[i] = c.copySlot(i);
	}

	return *this;
}

AMateria* Character::copySlot(int i) const
{
	return slot_[i] ? slot_[i]->clone() : NULL;
}

std::string const& Character::getName() const
{
	return name_;
}

void Character::equip(AMateria* m)
{
	int i;

	for (i = 0; i < 4; i++)
		if (!slot_[i])
			break;

	if (i < 4)
		slot_[i] = m;
	else
		std::cout << "\e[31m" << name_ << "'s inventory is full!\e[0m" << std::endl;
}

void Character::unequip(int idx)
{
	if (slot_[idx])
		slot_[idx] = NULL;
	else
		std::cout << "\e[31m" << idx << "th slot is already empty!\e[0m" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (slot_[idx])
		slot_[idx]->use(target);
	else
		std::cout << "\e[31m" << idx << "th slot is empty! " << name_ << " can't do anything 😢 \e[0m" << std::endl;
}
