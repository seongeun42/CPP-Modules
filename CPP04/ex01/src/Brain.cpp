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

Brain::Brain() : ideas_(0)
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& br)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = br;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& br)
{
	std::cout << "Brain Assignment Operator called" << std::endl;
	ideas_ = br.ideas;
}
