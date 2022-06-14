/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:51:39 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:51:39 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	replaceSpace(std::string& s)
{
	for (int i = 0; s[i]; i++)
	{
		if (s[i] >= 9 && s[i] <= 13)
			s[i] = ' ';
	}
}

PhoneBook::PhoneBook() : index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(std::string info[])
{
	Contact contact(info);

	if (index < 8)
		contacts[index++] = contact;
	else
	{
		for (int i = 0; i < 7; i++)
			contacts[i] = contacts[i + 1];
		contacts[7] = contact;
	}
}

void	PhoneBook::printContactAll()
{
	std::string str;

	std::cout << "\e[47m\e[30m┌──────────┬──────────┬──────────┬──────────┐\e[0m\n";
	std::cout << "\e[47m\e[30m|     Index|First Name| Last Name|  Nickname|\e[0m\n";
	for (int i = 0; i < index; i++)
	{
		std::cout << "\e[47m\e[30m|----------|----------|----------|----------|\e[0m\n";
		std::cout << "\e[47m\e[30m|" << std::setw(10) << i + 1 << "|";

		str = contacts[i].getFirstName();
		replaceSpace(str);
		str = str.length() < 10 ? str : str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << "|";

		str = contacts[i].getLastName();
		replaceSpace(str);
		str = str.length() < 10 ? str : str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << "|";

		str = contacts[i].getNickname();
		replaceSpace(str);
		str = str.length() < 10 ? str : str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << "|\e[0m\n";
	}
	std::cout << "\e[47m\e[30m└──────────┴──────────┴──────────┴──────────┘\e[0m\n";
}

void	PhoneBook::printContact(int idx)
{
	std::cout << "\e[35m|Index     | \e[0m" << idx + 1 << "\n";
	std::cout << "\e[35m|First Name| \e[0m" << contacts[idx].getFirstName() << "\n";
	std::cout << "\e[35m|Last Name | \e[0m" << contacts[idx].getLastName() << "\n";
	std::cout << "\e[35m|Nickname  | \e[0m" << contacts[idx].getNickname() << "\n";
	std::cout << "\e[35m|Phone     | \e[0m" << contacts[idx].getPhone() << "\n";
	std::cout << "\e[35m|Secret    | \e[0m" << contacts[idx].getSecret() << "\n";
}

int		PhoneBook::getIndex()
{
	return index;
}