/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:10:44 by seongele          #+#    #+#             */
/*   Updated: 2022/06/21 00:10:44 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name_;
	AMateria* slot_[4];

public:
	Character();
	Character(std::string name);
	Character(const Character& c);
	~Character();
	Character& operator=(const Character& c);

	AMateria* copySlot(int i) const;
	std::string const& getName() const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif