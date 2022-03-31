#include "Phonebook.hpp"

int main()
{
	PhoneBook	book;
	std::string	line;
	int			ind;

	std::cout << CYAN << "TYPE ONE OF AVAILABLE COMMANDS: ADD, SEARCH OR EXIT" << RESET << std::endl;
	std::getline(std::cin, line);
	ind = 0;
	while (line != "EXIT")
	{
		if (line == "ADD")
		{
			book.addNewContact(ind + 1);
			book.contacts_count++;
		}
		else if (line == "SEARCH")
		{
			if (book.contacts_count == 0)
				std::cout << RED << "There is no contacts yet in this PhoneBook" << RESET << std::endl;
			else
			{
				book.printAllContacts();
				book.searchContact();
			}
		}
		else
			std::cout << "Invalid command. Try one of ADD, SEARCH OR EXIT" << std::endl;
		std::cout << CYAN << "TYPE ONE OF AVAILABLE COMMANDS: ADD, SEARCH OR EXIT" << RESET << std::endl;
		std::getline(std::cin, line);
		if (book.contacts_count == 8)
			book.contacts_count = 0;
	}
	std::cout << YELLOW << "Bye-bye" << RESET << std::endl;
	return 0;
}
