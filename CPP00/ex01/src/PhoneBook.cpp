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

void	PhoneBook::printContact(int idx)
{
	std::cout << "|-------------------------------------------|\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	std::cout << "|";
	std::cout.width(10);
	std::cout << idx + 1 << "|";
	std::cout.width(10);
	std::cout << this->contacts[idx].getFirstName() << "|";
	std::cout.width(10);
	std::cout << this->contacts[idx].getLastName() << "|";
	std::cout.width(10);
	std::cout << this->contacts[idx].getNickname() << "|\n";
	std::cout << "|-------------------------------------------|\n\n";
}

int		PhoneBook::getIndex()
{
	return this->index;
}