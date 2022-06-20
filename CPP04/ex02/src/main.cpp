/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:17:22 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:17:22 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "========== Abstract Class Test ==========" << std::endl;
	
		// AAnimal animal;
		Cat cat;
		Dog dog;

		// animal.makeSound();
		cat.makeSound();
		dog.makeSound();
	}

	return 0;
}