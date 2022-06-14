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

static bool	makeInfo(std::string info[])
{
	std::cout << "\nInput your first name (ex. Kim) : ";
	std::getline(std::cin, info[0]);
	if (std::cin.eof())
		return false;
	std::cout << "Input your last name (ex. Seoul) : ";
	std::getline(std::cin, info[1]);
	if (std::cin.eof())
		return false;
	std::cout << "Input your nickname (ex. bear) : ";
	std::getline(std::cin, info[2]);
	if (std::cin.eof())
		return false;
	std::cout << "Input your phone number (ex. 010-1234-5678) : ";
	std::getline(std::cin, info[3]);
	if (std::cin.eof())
		return false;
	std::cout << "Input your darkest secret (ex. crying) : ";
	std::getline(std::cin, info[4]);
	if (std::cin.eof())
		return false;

	return true;
}

static bool	isNumber(std::string& num)
{
	for (int i = 0; num[i]; i++)
		if (num[i] < '0' || num[i] > '9')
			return false;
	return true;
}

static int isValidIdx(std::string& num, int maxIndex)
{
	if (num.length() > 1 || num[0] > '0' + maxIndex)
		return -1;
	return num[0] - '0';
}

static int	selectIndex(int	maxIndex)
{
	std::string idx;
	bool isNum;
	int isValid;

	if (maxIndex == 0)
		return -1;

	do
	{
		std::cout << "If you want to return to command selection, enter 0.\n";
		std::cout << "Or enter the index you want to search for (1 ~ " << maxIndex << ")\n";
		std::cout << "\e[96m>> \e[0m";
		std::getline(std::cin, idx);
		if (std::cin.eof())
			return -2;
		
		isNum = isNumber(idx);
		if (!isNum)
			std::cout << "\n\e[31mInput only NATURAL NUMBER!\e[0m\n";
		else
		{
			isValid = isValidIdx(idx, maxIndex);
			if (isValid < 0)
				std::cout << "\n\e[31mIndex out of range. Current max index is " << maxIndex << ". Enter again!\e[0m\n";
		}
	} while (isValid < 0 || !isNum);

	return isValid;
}

int	main()
{
	int			idx;
	std::string info[5];
	std::string	cmd;
	PhoneBook	pb;

	std::cout << "\e[100m\e[96mWelcome to Awesome PhoneBook!\e[0m\n";

	while (1)
	{
		std::cout << "\n\e[32mSelect command!\e[0m\n";
		std::cout << "1. ADD\n";
		std::cout << "2. SEARCH\n";
		std::cout << "3. EXIT\n";
		std::cout << "\e[96m>> \e[0m";
		std::getline(std::cin, cmd);

		if (!cmd.compare("ADD") | !cmd.compare("add") | !cmd.compare("1"))
		{
			if (makeInfo(info))
				pb.addContact(info);
			else
			{
				std::cout << "\e[31mYou press Ctrl + D!\e[0m\n";
				break;
			}
		}
		else if (!cmd.compare("SEARCH") | !cmd.compare("search") | !cmd.compare("2"))
		{
			pb.printContactAll();
			idx = selectIndex(pb.getIndex());
			if (idx == -1)
				std::cout << "\n\e[31mCurrent PhoneBook is empty!\e[0m\n";
			else if (idx == -2)
			{
				std::cout << "\n\e[31mYou press Ctrl + D!\e[0m\n";
				break;
			}
			else if (idx == 0)
				std::cout << "\n\e[31mReturn command selection!\e[0m\n";
			else
				pb.printContact(idx - 1);
		}
		else if (!cmd.compare("EXIT") | !cmd.compare("exit") | !cmd.compare("3"))
			break;
		else if (std::cin.eof())
		{
			std::cout << "\e[31mYou press Ctrl + D!\e[0m\n";
			break;
		}
		else
			std::cout << "\n\e[31mWrong command! Select again!\e[0m\n";
	}
	std::cout << "\n\e[36mPhoneBook is closed! Bye!\e[0m\n";
	return 0;
}
