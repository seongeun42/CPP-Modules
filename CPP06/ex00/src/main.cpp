/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:18:18 by seongele          #+#    #+#             */
/*   Updated: 2022/06/30 22:18:18 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Must have 1 argument!" << std::endl;
		return 1;
	}

	Convert v(argv[1]);

	v.printAll();

	return 0;
}