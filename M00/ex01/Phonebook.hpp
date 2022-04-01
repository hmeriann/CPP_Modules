#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	int		contacts_count;
	void	addNewContact(int i);
	void	printCurrentContact(Contact current);
	void	printAllContacts(void);
	void	searchContact(void);

private:
	Contact	contacts[8];

};

#define RESET	"\033[0m"
#define BLACK	"\033[30m"		/* Black */
#define RED		"\033[31m"		/* Red */
#define GREEN	"\033[32m"		/* Green */
#define YELLOW	"\033[33m"		/* Yellow */
#define BLUE	"\033[34m"		/* Blue */
#define MAGENTA	"\033[35m"		/* Magenta */
#define CYAN	"\033[36m"		/* Cyan */
#define WHITE	"\033[37m"		/* White */

#define BOLDWHITE	"\033[1m\033[37m"	/* Bold White */
#endif
