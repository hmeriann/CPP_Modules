#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << std::endl;
	std::cout << MAGENTA << "----->>>  " << BOLDWHITE << "WELCOME TO THE PHONEBOOK!" << MAGENTA "  <<<-----" << RESET << std::endl;
	std::cout << std::endl;
	contacts_count = 0;
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::addNewContact(int i)
{
	std::string	tmp_str;
	int			iter;
	
	iter = 0;
	contacts[i].SetInd(i);

	for (int iter = 0; iter < 2; iter++)
	{
		std::cout << BOLDWHITE << "FIRST NAME: " << RESET;
		std::getline(std::cin, tmp_str);
		contacts[i].SetFirstName(tmp_str);
		if (contacts[i].GetFirstName().length() == 0)
		{
			std::cout << "The field cannot be empty" << std::endl;
			iter = 0;
		}
	}
	tmp_str.clear();

	for (int iter = 0; iter < 2; iter++)
	{
		std::cout << BOLDWHITE << "LAST NAME: " << RESET;
		std::getline(std::cin, tmp_str);
		contacts[i].SetLastName(tmp_str);
		if (contacts[i].GetLastName().length() == 0)
		{
			std::cout << "The field cannot be empty" << std::endl;
			iter = 0;
		}
	}
	tmp_str.clear();

	std::cout << BOLDWHITE << "NICKNAME: " << RESET;
	std::getline(std::cin, tmp_str);
	if (tmp_str.empty())
	{
		std::cout << "The field cannot be empty" << std::endl;
		std::getline(std::cin, tmp_str);
	}
	contacts[i].SetNickName(tmp_str);
	tmp_str.clear();
	
	std::cout << BOLDWHITE << "PHONE NUMBER: " << RESET;
	std::getline(std::cin, tmp_str);
	while (tmp_str.empty())
	{
		std::getline(std::cin, tmp_str);
		std::cout << "The field cannot be empty" << std::endl;
	}
	if (tmp_str.find_first_not_of("1234567890") != std::string::npos)
		std::cout << "Phone number must contain only numbers" << std::endl;
	else
		contacts[i].SetPhoneNumber(tmp_str);
	tmp_str.clear();
	
	std::cout << BOLDWHITE << "DARKEST SECRET: " << RESET;
	std::getline(std::cin, tmp_str);
	while (tmp_str.empty())
	{
		std::getline(std::cin, tmp_str);
		std::cout << "The field cannot be empty" << std::endl;
	}
	contacts[i].SetDarkestSecret(tmp_str);
	tmp_str.clear();

	std::cout << GREEN << "Contact is successfully added" << RESET << std::endl;
	std::cout << std::endl;
	return;
}

void	PhoneBook::searchContact(void)
{
	int	index;
	int	i = 0;

	std::cout << std::endl;
	if (contacts[0].GetInd() == 0)
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
	while (i < 8 && contacts[i].GetInd() != index)
		i++;
	if (i > 7 || index < 1)
		std::cout << RED << "Index not found" << RESET << std::endl;
	else
	{
		std::cout << std::endl
				<< BOLDWHITE << "FIRST NAME: " << RESET << contacts[i].GetFirstName() << std::endl
				<< BOLDWHITE << "LAST NAME: " << RESET << contacts[i].GetLastName() << std::endl
				<< BOLDWHITE << "NICK NAME: " << RESET << contacts[i].GetNickName() << std::endl
				<< BOLDWHITE << "PHONE NUMBER: " << RESET << contacts[i].GetPhoneNumber() << std::endl
				<< BOLDWHITE << "DARKEST SECRET: " << RESET << contacts[i].GetDarkestSecret() << std::endl;
	}
	return;
}

void	PhoneBook::printAllContacts(void)
{
	int	i = 0;
	if (contacts_count == 0)
		std::cout << RED << "There is no contacts yet in this PhoneBook" << RESET << std::endl;
	else
	{
		std::cout << std::endl;
		std::cout << std::string(45, '-') << std::endl;
		std::cout << BOLDWHITE << "|     index|first name| last name|  nickname|" << RESET << std::endl;
		std::cout << std::string(45, '-') << std::endl;
		while (i < contacts_count)
		{
			printCurrentContact(contacts[i + 1]);
			i++;
		}
	}
}

void	PhoneBook::printCurrentContact(Contact current)
{
	std::cout << std::right << "|" << std::setw(10) << current.GetInd() << "|";
	if (current.GetFirstName().length() < 10)
		std::cout << std::right << std::setw(10) << current.GetFirstName() << "|";
	else
		std::cout << std::right << std::setw(9) << current.GetLastName().substr(0, 9) << "." << "|";
	if (current.GetLastName().length() < 10)
		std::cout << std::right << std::setw(10) << current.GetLastName() << "|";
	else
		std::cout << std::right << std::setw(9) << current.GetLastName().substr(0, 9) << "." << "|";
	if (current.GetNickName().length() < 10)
		std::cout << std::right << std::setw(10) << current.GetNickName() << "|";
	else
		std::cout << std::right << std::setw(9) << current.GetNickName().substr(0, 9) << "." << "|";
	std::cout << std::endl;
	std::cout << std::string(45, '-') << std::endl;
}