/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:43:36 by seongele          #+#    #+#             */
/*   Updated: 2022/06/16 20:43:36 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

# define MAX_HP 10

class ClapTrap
{
private:
	std::string name_;
	unsigned int hit_;
	unsigned int energy_;
	unsigned int damage_;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ct);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& ct);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void printStatus();
};

#endif