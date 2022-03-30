#include "phonebook.class.hpp"

int main()
{
	// PhoneBook	book;
	std::string	line;
	int			ind;
	int			contacts_count;

	std::cout << "WELCOME TO THE PHONEBOOK!" << std::endl;
	std::cout << "TYPE ONE OF AVAILABLE COMMANDS: ADD, SEARCH OR EXIT" << std::endl;
	std::getline(std::cin, line);
	ind = 0;
	contacts_count = 0;
	while (line != "EXIT")
	{
		if (line == "ADD")
		{
			std::cout << "this is ADD" << std::endl;
			// book.addNewContact(ind, contacts_count);
			contacts_count++;
		}
		else if (line == "SEARCH")
		{
			if (contacts_count == 0)
				std::cout << "There is no contacts yet in this PhoneBook" << std::endl;
			else
				std::cout << "this is SEARCH" << std::endl;
				return 0;
				// book.searchContactByIndex(ind);
		}
		std::getline(std::cin, line);
		if (contacts_count == 8)
			contacts_count = 0;
	}
	std::cout << "Bye-bye" << std::endl;
	return 0;
}
