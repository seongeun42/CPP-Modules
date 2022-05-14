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
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact();
	~Contact();
	Contact(std::string *field);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
};

#endif
