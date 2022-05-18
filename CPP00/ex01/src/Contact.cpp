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
	phone_number(info[3]), darkest_secret(info[4])
{
	delete[] info;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName()
{
	return this->first_name.length() < 10 ? this->first_name : this->first_name.substr(0, 9) + ".";
}

std::string	Contact::getLastName()
{
	return this->last_name.length() < 10 ? this->last_name : this->last_name.substr(0, 9) + ".";
}

std::string	Contact::getNickname()
{
	return this->nickname.length() < 10 ? this->nickname : this->nickname.substr(0, 9) + ".";
}