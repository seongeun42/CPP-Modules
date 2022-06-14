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

Contact::Contact(std::string info[]) : first_name(info[0]), last_name(info[1]), nickname(info[2]),
	phone(info[3]), secret(info[4])
{
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName()
{
	return first_name;
}

std::string	Contact::getLastName()
{
	return last_name;
}

std::string	Contact::getNickname()
{
	return nickname;
}

std::string	Contact::getPhone()
{
	return phone;
}

std::string	Contact::getSecret()
{
	return secret;
}