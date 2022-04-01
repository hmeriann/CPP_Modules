#include "Phonebook.hpp"

int main()
{
	PhoneBook	book;
	std::string	line;
	int			ind;

	ind = 0;
	while (1)
	{
		std::cout << CYAN << "TYPE ONE OF AVAILABLE COMMANDS: ADD, SEARCH OR EXIT" << RESET << std::endl;
		std::cin >> line;
		if (line == "EXIT")
		{
			std::cout << YELLOW << "Bye-bye" << RESET << std::endl;
			return 0;
		}
		else if (line == "ADD")
		{
			if (book.contacts_count == 8)
				book.contacts_count = 0;
			book.addNewContact(book.contacts_count + 1);
			book.contacts_count++;
		}
		else if (line == "SEARCH")
		{
			book.printAllContacts();
			book.searchContact();
		}
		else
			std::cout << "Invalid command. Try one of ADD, SEARCH OR EXIT" << std::endl;
	}
	return 0;
}
