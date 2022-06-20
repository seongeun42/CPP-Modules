/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:27:17 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 14:04:08 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string ideas_[100];

public:
	Brain();
	Brain(const Brain& br);
	~Brain();
	Brain& operator=(const Brain& br);

	std::string getIdea(size_t idx) const;
	void setIdea(size_t idx, std::string idea);
};

#endif