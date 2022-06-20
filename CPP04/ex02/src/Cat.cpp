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

Cat::Cat() : AAnimal()
{
	std::cout << "\e[93mCat\e[0m Default Constructor called" << std::endl;
	type_ = "Cat";
	brain_ = new Brain();
}

Cat::Cat(const Cat& cat) : AAnimal(cat)
{
	std::cout << "\e[93mCat\e[0m Copy Constructor called" << std::endl;
	type_ = cat.getType();
	brain_ = new Brain(*cat.getBrain());
}

Cat::~Cat()
{
	std::cout << "\e[93mCat\e[0m Destructor called" << std::endl;
	delete brain_;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "\e[93mCat\e[0m Assignment Operator called" << std::endl;

	if (this != &cat)
	{
		type_ = cat.getType();
		*brain_ = *cat.getBrain();
	}

	return *this;
}

void Cat::makeSound() const
{
	std::cout << "< 🐱 Cat > : 야옹야옹~~~" << std::endl;
}

const Brain* Cat::getBrain() const
{
	return brain_;
}

void Cat::setBrain(std::string idea)
{
	for (int i = 0; i < 100; i++)
		brain_->setIdea(i, idea);
}

void Cat::printBrain()
{
	for (int i = 0; i < 100; i++)
		std::cout << "Cat Brain" << i << "'s idea : " << brain_->getIdea(i) << std::endl;
}