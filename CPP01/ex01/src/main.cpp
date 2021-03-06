/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:53:57 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:53:57 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::cout << "========Failed========\n";
	{
		Zombie*	horde = zombieHorde(-5, "horde zombie");
		if (!horde)
			std::cout << "There must be at least 1 zombie.\n";
	}


	std::cout << "\n\n========Success========\n";
	{
		Zombie*	horde = zombieHorde(5, "horde zombie");
		if (!horde)
			return 1;

		for (int i = 0; i < 5; i++)
			horde[i].anounce();

		delete[] horde;
	}

	return 0;
}