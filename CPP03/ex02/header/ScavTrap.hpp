/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 00:20:35 by seongele          #+#    #+#             */
/*   Updated: 2022/06/17 00:20:35 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	bool keeper_;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& st);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& st);

	void attack(const std::string& target);
	void guardGate();

	void printStatus();
};

#endif