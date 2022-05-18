/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:54:08 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:54:08 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
		return 0;
		
	Zombie*	horde = new Zombie[N];
	if (!horde)
		return 0;
	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return (horde);
}