#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <string>
// using namespace std; // no es necesario (std::string firstName;//string firstName;)

class	Contact
{
	public:
		// Variables
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

		// Constructor : lista de inicialización
		Contact(const std::string &firstName, const std::string &lastName,
			const std::string &nickName, const std::string &phoneNumber,
			const std::string &darkestSecret)
		: firstName(firstName), lastName(lastName), nickName(nickName),
			phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}
};

class	Phonebook
{
	private:
		static const int	maxContacts = 8;
		Contact				contacts[maxContacts];
		int					numContacts;

	public:
		// Constructor
		Phonebook(int, Contact, int);

			void	add();
			void	search();
			void	exit();
};
#endif
