#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "contact.class.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	// int		addNewContact(int ind, int cont_count);
	// void	printCurrentContact();
	// void	printAllContacts();
	// void	searchContactByIndex(int ind);

// private:
	Contact	contacts[8];
};

#endif
