/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:11:28 by seongele          #+#    #+#             */
/*   Updated: 2022/06/21 00:11:28 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type_("none")
{
}

AMateria::AMateria(const std::string& type) : type_(type)
{
}

AMateria::AMateria(const AMateria& mt) : type_(mt.getType())
{
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(const AMateria& mt)
{
	if (this != &mt)
		type_ = mt.getType();
	return *this;
}

std::string const& AMateria::getType() const
{
	return type_;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "❓️ AMateria don't know what to do with " << target.getName() << " ❓️" << std::endl;
}
