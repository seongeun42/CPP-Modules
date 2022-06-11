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

void	PhoneBook::addContact(std::string *info)
{
	Contact contact(info);

	if (this->index < 8)
		this->contacts[this->index++] = contact;
	else
	{
		for (int i = 0; i < 7; i++)
			this->contacts[i] = this->contacts[i + 1];
		this->contacts[7] = contact;
	}
}

void	PhoneBook::printContactAll()
{
	std::string str;

	std::cout << "|-------------------------------------------|\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	for (int i = 0; i < this->index; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i + 1 << "|";

		std::cout.width(10);
		str = this->contacts[i].getFirstName();
		replaceSpace(str);
		str = str.length() < 10 ? str : str.substr(0, 9) + ".";
		std::cout << str << "|";

		std::cout.width(10);
		str = this->contacts[i].getLastName();
		replaceSpace(str);
		str = str.length() < 10 ? str : str.substr(0, 9) + ".";
		std::cout << str << "|";

		std::cout.width(10);
		str = this->contacts[i].getNickname();
		replaceSpace(str);
		str = str.length() < 10 ? str : str.substr(0, 9) + ".";
		std::cout << str << "|\n";
		std::cout << "|-------------------------------------------|\n";
	}
}

void	PhoneBook::printContact(int idx)
{
	std::cout << "|Index     | " << this->contacts[idx].getFirstName() << "\n";
	std::cout << "|First Name| " << this->contacts[idx].getLastName() << "\n";
	std::cout << "|Last Name | " << this->contacts[idx].getNickname() << "\n";
	std::cout << "|Nickname  | " << this->contacts[idx].getPhone() << "\n";
	std::cout << "|Phone     | " << this->contacts[idx].getSecret() << "\n";
	std::cout << "|Secret    | " << this->contacts[idx].getSecret() << "\n";
}

int		PhoneBook::getIndex()
{
	return this->index;
}