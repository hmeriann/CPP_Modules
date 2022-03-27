#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contact {
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;


};

class PhoneBook {

	Contact	contacts[8];

	public:
		addNewContact();
		
};

#endif
