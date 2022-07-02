/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:22:24 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 17:22:24 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::vector<int>::iterator it;

	for (int i = 0; i < 10; i++)
		v.push_back(i);

	it = easyfind(v, 4);
	std::cout << "easyfind(v, 4) : " << *it << std::endl;

	try
	{
		std::cout << "easyfind(v, 100) : ";
		it = easyfind(v, 100);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}