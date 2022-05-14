#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		index;

public:
	PhoneBook();
	~PhoneBook();
	void	addContact(std::string *info);
	void	printContact(int idx);
	int		getIndex();
};

#endif