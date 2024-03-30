#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <string>

class	Contact
{
	public:
		// Variables
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

		// Constructor
		Contact(const std::string &firstName, const std::string &lastName,
			const std::string &nickName, const std::string &phoneNumber,
			const std::string &darkestSecret)
		: firstName(firstName), lastName(lastName), nickName(nickName),
			phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}
};

class	Phonebook
{
	private:
		static const int	MaxContacts = 8;
		Contact				Contact[MaxContacts];
		int					numContacts;

	public:
		// Constructor
		PhoneBook() : numContacts(0) {}
		// Métodos
			// add, search and exit
};
#endif
