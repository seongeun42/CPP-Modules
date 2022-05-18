/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:51:49 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:51:49 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string *info) : first_name(info[0]), last_name(info[1]), nickname(info[2]),
	phone(info[3]), secret(info[4])
{
	delete[] info;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName(int mod)
{
	if (mod == 1)
		return this->first_name.length() < 10 ? this->first_name : this->first_name.substr(0, 9) + ".";
	else
		return this->first_name;
}

std::string	Contact::getLastName(int mod)
{
	if (mod == 1)
		return this->last_name.length() < 10 ? this->last_name : this->last_name.substr(0, 9) + ".";
	else
		return this->last_name;
}

std::string	Contact::getNickname(int mod)
{
	if (mod == 1)
		return this->nickname.length() < 10 ? this->nickname : this->nickname.substr(0, 9) + ".";
	else
		return this->nickname;
}

std::string	Contact::getPhone(int mod)
{
	if (mod == 1)
		return this->phone.length() < 10 ? this->phone : this->phone.substr(0, 9) + ".";
	else
		return this->phone;
}

std::string	Contact::getSecret(int mod)
{
	if (mod == 1)
		return this->secret.length() < 10 ? this->secret : this->secret.substr(0, 9) + ".";
	else
		return this->secret;
}