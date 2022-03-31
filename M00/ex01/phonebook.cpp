#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "WELCOME TO THE PHONEBOOK!" << std::endl;
	contacts_count = 0;
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::addNewContact(int i)
{
	contacts[i].addFirstName(&contacts[i]);
	contacts[i].addLastName(&contacts[i]);
	contacts[i].addNickName(&contacts[i]);
	contacts[i].addPhoneNumber(&contacts[i]);
	contacts[i].addDarkestSecret(&contacts[i]);
	contacts[i].ind = i;
	std::cout << GREEN << "Contact is successfully added" << RESET << std::endl;
	std::cout << std::endl;
	return;
}

void	PhoneBook::printCurrentContact(Contact current)
{
	std::cout << std::right << "|" << std::setw(10) << current.ind << "|";
	if (current.firstName.length() < 10)
		std::cout << std::right << std::setw(10) << current.firstName << "|";
	else
		std::cout << std::right << std::setw(9) << current.firstName.substr(0, 9) << "." << "|";
	if (current.lastName.length() < 10)
		std::cout << std::right << std::setw(10) << current.lastName << "|";
	else
		std::cout << std::right << std::setw(9) << current.lastName.substr(0, 9) << "." << "|";
	if (current.nickName.length() < 10)
		std::cout << std::right << std::setw(10) << current.nickName << "|";
	else
		std::cout << std::right << std::setw(9) << current.nickName.substr(0, 9) << "." << "|";
	std::cout << std::endl;
	std::cout << std::string(45, '-') << std::endl;
}

void	PhoneBook::printAllContacts(void)
{
	int	i = 0;
	std::cout << std::endl;
	std::cout << std::string(45, '-') << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << std::string(45, '-') << std::endl;
	while (i < contacts_count || i < 9)
	{
		printCurrentContact(contacts[i + 1]);
		i++;
	}
}

void	PhoneBook::searchContact(void)
{
	int	index;
	int	i = 0;

	std::cout << std::endl;
	if (contacts[0].ind == 0)
		return;
	std::cout << "Type the index of the contact that you want to be shown: ";
	std::cin >> index;
	if (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << RED << "There is no contact by this index" << RESET << std::endl;
		return;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (i < 8 && contacts[i].ind != index)
		i++;
	if (i > 7 || index < 1)
		std::cout << RED << "Index not found" << RESET << std::endl;
	else
	{
		std::cout << std::endl
				<< BOLDWHITE << "FIRST NAME: " << RESET << contacts[i].firstName << std::endl
				<< BOLDWHITE << "LAST NAME: " << RESET << contacts[i].lastName << std::endl
				<< BOLDWHITE << "NICK NAME: " << RESET << contacts[i].nickName << std::endl
				<< BOLDWHITE << "PHONE NUMBER: " << RESET << contacts[i].phoneNumber << std::endl
				<< BOLDWHITE << "DARKEST SECRET: " << RESET << contacts[i].darkestSecret << std::endl;
	}
	return;
}
