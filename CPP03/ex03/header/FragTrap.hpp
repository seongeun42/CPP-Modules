/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 02:25:22 by seongele          #+#    #+#             */
/*   Updated: 2022/07/08 16:11:28 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define FRAG_ATTACK_DAMAGE 30

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& ft);
	virtual ~FragTrap();
	FragTrap& operator=(const FragTrap& ft);

	void highFivesGuys();

	void printStatus();
};

#endif