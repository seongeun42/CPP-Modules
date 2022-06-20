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

Dog::Dog() : AAnimal()
{
	std::cout << "\e[32mDog\e[0m Default Constructor called" << std::endl;
	type_ = "Dog";
	brain_ = new Brain();
}

Dog::Dog(const Dog& dog) : AAnimal(dog)
{
	std::cout << "\e[32mDog\e[0m Copy Constructor called" << std::endl;
	type_ = dog.getType();
	brain_ = new Brain(*dog.getBrain());
}

Dog::~Dog()
{
	std::cout << "\e[32mDog\e[0m Destructor called" << std::endl;
	delete brain_;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "\e[32mDog\e[0m Assignment Operator called" << std::endl;

	if (this != &dog)
	{
		type_ = dog.getType();
		*brain_ = *dog.getBrain();
	}

	return *this;
}

void Dog::makeSound() const
{
	std::cout << "< 🐶 Dog > : 멍멍멍멍!!!!!" << std::endl;
}

const Brain* Dog::getBrain() const
{
	return brain_;
}

void Dog::setBrain(std::string idea)
{
	for (int i = 0; i < 100; i++)
		brain_->setIdea(i, idea);
}

void Dog::printBrain()
{
	for (int i = 0; i < 100; i++)
		std::cout << "Dog Brain" << i << "'s idea : " << brain_->getIdea(i) << std::endl;
}