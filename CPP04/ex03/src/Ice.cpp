/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:37:11 by seongele          #+#    #+#             */
/*   Updated: 2022/06/26 12:37:11 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& ice) : AMateria(ice)
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice& ice)
{
	if (this != &ice)
		type_ = ice.getType();

	return *this;
}

AMateria* Ice::clone() const
{
	Ice* ice = new Ice(*this);
	return ice;
}

void Ice::use(ICharacter& target)
{
	std::cout << "\e[96m* shoots an ice bolt at " << target.getName() << " *\e[0m" << std::endl;
}
