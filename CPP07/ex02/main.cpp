/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:19:28 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 16:19:28 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
	{
		std::cout << "========== int array ==========" << std::endl;

		Array<int> integer(10);
		Array<int> mirror;

		for (int i = 0; i < 10; i++)
			integer[i] = i;

		mirror = integer;

		for (int i = 0; i < 10; i++)
			mirror[i] += 10;
		
		std::cout << "original : ";
		for (int i = 0; i < 10; i++)
			std::cout << integer[i] << " ";
		
		std::cout << "\nmirror : ";
		for (int i = 0; i < 10; i++)
			std::cout << mirror[i] << " ";

		std::cout << std::endl;

		try
		{
			std::cout << integer[-1];
		}
		catch (std::exception& e)
		{
			std::cerr << "-1 : " << e.what() << std::endl;
		}

		try
		{
			std::cout << integer[100];
		}
		catch (std::exception& e)
		{
			std::cerr << "100 : " << e.what() << std::endl;
		}
	}

	{
		std::cout << "\n========== string array ==========" << std::endl;

		Array<std::string> str(10);
		Array<std::string> mirror;

		for (int i = 0; i < 10; i++)
			str[i] = "hi";

		mirror = str;

		for (int i = 0; i < 10; i++)
			mirror[i] += "_copy";
		
		std::cout << "original : ";
		for (int i = 0; i < 10; i++)
			std::cout << str[i] << " ";
		
		std::cout << "\nmirror : ";
		for (int i = 0; i < 10; i++)
			std::cout << mirror[i] << " ";

		std::cout << std::endl;

		try
		{
			std::cout << str[-1];
		}
		catch (std::exception& e)
		{
			std::cerr << "-1 : " << e.what() << std::endl;
		}

		try
		{
			std::cout << str[100];
		}
		catch (std::exception& e)
		{
			std::cerr << "100 : " << e.what() << std::endl;
		}
	}

	return 0;
}