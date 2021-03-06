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
#include <iomanip>

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
	Contact(std::string info[]);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string getPhone();
	std::string getSecret();
};

#endif
