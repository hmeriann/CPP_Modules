#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
public:
	Contact();
	~Contact();

/* getters */
	int			GetInd(void) const;
	std::string	GetFirstName(void) const;
	std::string	GetLastName(void) const;
	std::string	GetNickName(void) const;
	std::string	GetPhoneNumber(void) const;
	std::string	GetDarkestSecret(void) const;

/* setters */
	void		SetInd(int i);
	void		SetFirstName(std::string fn);
	void		SetLastName(std::string ln);
	void		SetNickName(std::string nn);
	void		SetPhoneNumber(std::string pn);
	void		SetDarkestSecret(std::string ds);

// /* member functions */
// 	void		initContact(Contact *contact);
// 	void		addFirstName(Contact *contact);
// 	void		addLastName(Contact *contact);
// 	void		addNickName(Contact *contact);
// 	void		addPhoneNumber(Contact *contact);
// 	void		addDarkestSecret(Contact *contact);

private:
	int			ind;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

};

#define RESET		"\033[0m"
#define BOLDWHITE	"\033[1m\033[37m"	/* Bold White */

#endif
