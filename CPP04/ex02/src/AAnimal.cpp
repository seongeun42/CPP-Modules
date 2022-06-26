/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:17:40 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:17:40 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type_("Animal")
{
	std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& animal) : type_(animal.getType())
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
	std::cout << "AAnimal Assignment Operator called" << std::endl;

	type_ = animal.getType();

	return *this;
}

const std::string AAnimal::getType() const
{
	return type_;
}
