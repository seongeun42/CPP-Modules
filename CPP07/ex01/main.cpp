/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:51:48 by seongele          #+#    #+#             */
/*   Updated: 2022/07/08 15:35:09 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T& v)
{
	std::cout << v << " ";
}

int main()
{
	int arrI[] = { 0, 1, 2, 3, 4, 5 };
	double arrD[] = { 0.5, 1.5, 2.5, 3.5, 4.5, 5.5 };
	std::string arrS[] = { "hi", "hello", "bye" };

	std::cout << "int	: ";
	iter(arrI, 6, print);
	std::cout << std::endl;

	std::cout << "double	: ";
	iter(arrD, 6, print);
	std::cout << std::endl;
	
	std::cout << "string	: ";
	iter(arrS, 3, print);
	std::cout << std::endl;

	return 0;
}