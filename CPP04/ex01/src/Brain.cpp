/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:27:29 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 14:04:20 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
	
	for (int i = 0; i < 100; i++)
		ideas_[i] = "nothing";
}

Brain::Brain(const Brain& br)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas_[i] = br.getIdea(i);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& br)
{
	std::cout << "Brain Assignment Operator called" << std::endl;
	
	if (this != &br)
	{
		for (int i = 0; i < 100; i++)
			ideas_[i] = br.getIdea(i);
	}

	return *this;
}

void Brain::setIdea(size_t idx, std::string idea)
{
	ideas_[idx] = idea;
}

std::string Brain::getIdea(size_t idx) const
{
	return ideas_[idx];
}

