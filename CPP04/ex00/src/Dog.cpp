/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:18:08 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:18:08 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "\e[32mDog\e[0m Default Constructor called" << std::endl;
	type_ = "Dog";
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "\e[32mDog\e[0m Copy Constructor called" << std::endl;
	type_ = dog.getType();
}

Dog::~Dog()
{
	std::cout << "\e[32mDog\e[0m Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "\e[32mDog\e[0m Assignment Operator called" << std::endl;

	type_ = dog.type_;

	return *this;
}

void Dog::makeSound() const
{
	std::cout << "< 🐶 Dog > : 멍멍멍멍!!!!!" << std::endl;
}