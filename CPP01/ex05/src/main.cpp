/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:56:50 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:56:50 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "======Debug======\n";
	harl.complain("DEBUG");

	std::cout << "\n======Info======\n";
	harl.complain("INFO");

	std::cout << "\n======Warning======\n";
	harl.complain("WARNING");

	std::cout << "\n======Error======\n";
	harl.complain("ERROR");

	std::cout << "\n======Else======\n";
	harl.complain("SOMETHING");

	return 0;
}