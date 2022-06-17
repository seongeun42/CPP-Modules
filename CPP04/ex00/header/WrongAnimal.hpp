/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:46:39 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 05:46:39 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type_;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& wa);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& wa);
	
	std::string getType() const;

	void makeSound() const;
};

#endif