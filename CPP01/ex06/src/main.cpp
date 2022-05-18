/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:57:12 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:57:12 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "harlFilter needs 1 argument!\n";
		return 1;
	}

	Harl harl;
	harl.complain((std::string) argv[1]);

	return 0;
}