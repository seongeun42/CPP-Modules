/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:17:40 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:17:40 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Animal")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& animal) : type_(animal.getType())
{
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal Assignment Operator called" << std::endl;

	type_ = animal.type_;

	return *this;
}

const std::string Animal::getType() const
{
	return type_;
}

void Animal::makeSound() const
{
	std::cout << "< Animal > : make some sound!" << std::endl;
}
