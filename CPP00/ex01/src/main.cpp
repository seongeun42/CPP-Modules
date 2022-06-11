/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:51:44 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:51:44 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string*	makeInfo()
{
	std::string	*info = new std::string[5]();
	
	std::cout << "\nInput your first name (ex. Kim) : ";
	std::getline(std::cin, info[0]);
	std::cout << "Input your last name (ex. Seoul) : ";
	std::getline(std::cin, info[1]);
	std::cout << "Input your nickname (ex. bear) : ";
	std::getline(std::cin, info[2]);
	std::cout << "Input your phone number (ex. 010-1234-5678) : ";
	std::getline(std::cin, info[3]);
	std::cout << "Input your darkest secret (ex. crying) : ";
	std::getline(std::cin, info[4]);

	return info;
}

int	selectIndex(int	maxIndex)
{
	int idx;

	if (maxIndex == 0)
		return -1;

	std::cout << "If you want to return to command selection, enter 0.\n";
	std::cout << "Or enter the index you want to search for (1 ~ " << maxIndex << ") : ";
	std::cin >> idx;
	while (idx < 0 || idx > maxIndex)
	{
		std::cout << "\nIndex out of range. Current max index is " << maxIndex << ". Enter again!\n";
		std::cout << "If you want to return to command selection, enter 0.\n";
		std::cout << "Or enter the index you want to search for (1 ~ " << maxIndex << ") : ";
		std::cin >> idx;
	}
	std::cin.ignore(1);
	
	return idx;
}

int	main()
{
	int			idx;
	std::string	cmd;
	PhoneBook	pb;

	std::cout << "Welcome to Awesome PhoneBook!\n";

	while (1)
	{
		std::cout << "\nSelect command!\n";
		std::cout << "1. ADD\n";
		std::cout << "2. SEARCH\n";
		std::cout << "3. EXIT\n";
		std::cout << "Enter : ";
		std::getline(std::cin, cmd);

		if (cmd == "ADD" | cmd == "add" | cmd == "1")
			pb.addContact(makeInfo());
		else if (cmd == "SEARCH" | cmd == "search" | cmd == "2")
		{
			pb.printContactAll();
			idx = selectIndex(pb.getIndex());
			if (idx == -1)
				std::cout << "\nCurrent PhoneBook is empty!\n";
			else if (idx == 0)
				std::cout << "\nReturn command selection!\n";
			else
				pb.printContact(idx - 1);
		}
		else if (cmd == "EXIT" | cmd == "exit" | cmd == "3" | std::cin.eof())
			return 0;
		else
			std::cout << "\nWrong command! Select again!\n";
	}
	return 0;
}
