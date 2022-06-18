/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:50:09 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:50:09 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wa)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = wa;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wa)
{
	std::cout << "WrongAnimal Assignment Operator called" << std::endl;

	type_ = wa.type_;

	return *this;
}

std::string WrongAnimal::getType() const
{
	return type_;
}

void WrongAnimal::makeSound() const
{
	std::cout << "< WrongAnimal > : wrong wrong make some sound!" << std::endl;
}