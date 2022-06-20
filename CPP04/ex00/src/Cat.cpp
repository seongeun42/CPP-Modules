/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:18:17 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:18:17 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "\e[93mCat\e[0m Default Constructor called" << std::endl;
	type_ = "Cat";
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << "\e[93mCat\e[0m Copy Constructor called" << std::endl;
	type_ = cat.getType();
}

Cat::~Cat()
{
	std::cout << "\e[93mCat\e[0m Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "\e[93mCat\e[0m Assignment Operator called" << std::endl;

	type_ = cat.type_;

	return *this;
}

void Cat::makeSound() const
{
	std::cout << "< 🐱 Cat > : 야옹야옹~~~" << std::endl;
}