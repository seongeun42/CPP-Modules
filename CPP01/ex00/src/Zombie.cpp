/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:52:50 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:52:50 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Hi, i'm " << name << ". I will bite you from now on!\n";
}

Zombie::~Zombie()
{
	std::cout << "Ugh..., " << this->name << " is died.....\n";
}

void	Zombie::anounce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
