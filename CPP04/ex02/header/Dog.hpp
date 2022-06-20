/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:18:00 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:18:00 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
private:
	Brain* brain_;

public:
	Dog();
	Dog(const Dog& dog);
	virtual ~Dog();
	Dog& operator=(const Dog& dog);

	void makeSound() const;

	const Brain* getBrain() const;
	void setBrain(std::string idea);
	
	void printBrain();
};

#endif