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
	std::cout << "|-------------------------------------------|\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	for (int i = 0; i < this->index; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i + 1 << "|";
		std::cout.width(10);
		std::cout << this->contacts[i].getFirstName(1) << "|";
		std::cout.width(10);
		std::cout << this->contacts[i].getLastName(1) << "|";
		std::cout.width(10);
		std::cout << this->contacts[i].getNickname(1) << "|\n";
		std::cout << "|-------------------------------------------|\n";
	}
}

void	PhoneBook::printContact(int idx)
{
	std::cout << "|Index     | " << this->contacts[idx].getFirstName(0) << "\n";
	std::cout << "|First Name| " << this->contacts[idx].getLastName(0) << "\n";
	std::cout << "|Last Name | " << this->contacts[idx].getNickname(0) << "\n";
	std::cout << "|Nickname  | " << this->contacts[idx].getPhone(0) << "\n";
	std::cout << "|Phone     | " << this->contacts[idx].getSecret(0) << "\n";
	std::cout << "|Secret    | " << this->contacts[idx].getSecret(0) << "\n";
}

int		PhoneBook::getIndex()
{
	return this->index;
}