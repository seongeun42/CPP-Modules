/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:51:59 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:51:59 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone;
	std::string	secret;

public:
	Contact();
	~Contact();
	Contact(std::string *field);
	std::string	getFirstName(int mod);
	std::string	getLastName(int mod);
	std::string	getNickname(int mod);
	std::string getPhone(int mod);
	std::string getSecret(int mod);
};

#endif
