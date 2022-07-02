/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:08:40 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 11:08:40 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data data(42);
	uintptr_t ptr = serialize(&data);
	Data* cast = deserialize(ptr);

	std::cout << "original :	" << &data << std::endl;
	std::cout << "uintptr_t ptr :	" << ptr << std::endl;
	std::cout << "cast :		" << cast << std::endl;

	return 0;
}