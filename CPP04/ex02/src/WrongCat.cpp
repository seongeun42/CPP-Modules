/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:50:02 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:50:02 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "\e[91mWrongCat\e[0m Default Constructor called" << std::endl;
	type_ = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& wc) : WrongAnimal(wc)
{
	std::cout << "\e[91mWrongCat\e[0m Copy Constructor called" << std::endl;
	*this = wc;
}

WrongCat::~WrongCat()
{
	std::cout << "\e[91mWrongCat\e[0m Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wc)
{
	std::cout << "\e[91mWrongCat\e[0m Assignment Operator called" << std::endl;

	type_ = wc.type_;

	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "< 🐈️ WrongCat > : 미야아옹~~~" << std::endl;
}