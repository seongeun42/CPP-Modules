/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:17:44 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:17:44 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string type_;

public:
	AAnimal();
	AAnimal(const AAnimal& animal);
	virtual ~AAnimal();
	AAnimal& operator=(const AAnimal& animal);
	
	const std::string getType() const;

	virtual void makeSound() const = 0;
};

#endif