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
	
	std::cout << "Input your first name (ex. Kim) : ";
	std::cin >> info[0];
	std::cout << "Input your last name (ex. Seoul) : ";
	std::cin >> info[1];
	std::cout << "Input your nickname (ex. bear) : ";
	std::cin >> info[2];
	std::cout << "Input your phone number (ex. 010-1234-5678) : ";
	std::cin >> info[3];
	std::cout << "Input your darkest secret (ex. crying) : ";
	std::cin >> info[4];

	return info;
}

int	selectIndex(int	maxIndex)
{
	int	idx;

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
	
	return idx;
}

int main()
{
	int			cmd;
	int			idx;
	PhoneBook	pb;

	std::cout << "Welcome to Awesome PhoneBook!\n";

	while (1)
	{
		std::cout << "\nSelect command!\n";
		std::cout << "1. ADD\n";
		std::cout << "2. SEARCH\n";
		std::cout << "3. EXIT\n";
		std::cout << "Enter : ";
		std::cin >> cmd;

		if (std::cin.eof())
			return 0;

		switch (cmd)
		{
		case 1:
			pb.addContact(makeInfo());
			break;
		case 2:
			while (1)
			{
				idx = selectIndex(pb.getIndex());
				if (idx == -1)
				{
					std::cout << "\nCurrent PhoneBook is empty!\n";
					break;
				}
				else if (idx == 0)
				{
					std::cout << "\nReturn command selection!\n";
					break;
				}
				else
					pb.printContact(idx - 1);
			}
			break;
		case 3:
			return 0;
		default:
			std::cout << "\nWrong command! Select again!\n";
			break;
		}
	}
	return 0;
}
