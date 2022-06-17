/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:17:44 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:17:44 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type_;

public:
	Animal();
	Animal(const Animal& animal);
	virtual ~Animal();
	Animal& operator=(const Animal& animal);
	
	std::string getType() const;

	virtual void makeSound() const;
};

#endif