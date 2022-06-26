/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:11:55 by seongele          #+#    #+#             */
/*   Updated: 2022/06/21 00:11:55 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& cure) : AMateria(cure)
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure& cure)
{
	if (this != &cure)
		type_ = cure.getType();

	return *this;
}

AMateria* Cure::clone() const
{
	Cure* cure = new Cure(*this);
	return cure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "\e[93m* heals " << target.getName() << "'s wounds *\e[0m" << std::endl;
}
