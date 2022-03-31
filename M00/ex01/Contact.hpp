#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
public:
	Contact();
	~Contact();

	int			ind;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	void	initContact(Contact *contact);
	void	addFirstName(Contact *contact);
	void	addLastName(Contact *contact);
	void	addNickName(Contact *contact);
	void	addPhoneNumber(Contact *contact);
	void	addDarkestSecret(Contact *contact);

};

#define RESET		"\033[0m"
#define BOLDWHITE	"\033[1m\033[37m"	/* Bold White */

#endif
