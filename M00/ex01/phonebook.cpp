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
		tmp_str.clear();
		// std::getline(std::cin, tmp_str);
		std::cin >> tmp_str;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (tmp_str.empty())
		{
			std::cout << "The field cannot be empty" << std::endl;
			iter = 0;
		}
		else
		{
			contacts[i].SetFirstName(tmp_str);
			break;
		}
	}

	for (int iter = 0; iter < 2; iter++)
	{
		std::cout << BOLDWHITE << "LAST NAME: " << RESET;
		tmp_str.clear();
		// std::getline(std::cin, tmp_str);
		std::cin >> tmp_str;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (tmp_str.length() == 0)
		{
			std::cout << "The field cannot be empty" << std::endl;
			iter = 0;
		}
		else
		{
			contacts[i].SetLastName(tmp_str);
			break;
		}
	}

	for (int iter = 0; iter < 2; iter++)
	{
		std::cout << BOLDWHITE << "NICKNAME: " << RESET;
		tmp_str.clear();
		// std::getline(std::cin, tmp_str);
		std::cin >> tmp_str;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (tmp_str.empty())
		{
			std::cout << "The field cannot be empty" << std::endl;
			iter = 0;
		}
		else
		{
			contacts[i].SetNickName(tmp_str);
			break;
		}
	}
	
	for (int iter = 0; iter < 2; iter++)
	{
		std::cout << BOLDWHITE << "PHONE NUMBER: " << RESET;
		tmp_str.clear();
		// std::getline(std::cin, tmp_str);
		std::cin >> tmp_str;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (tmp_str.empty())
		{
			std::cout << "The field cannot be empty" << std::endl;
			iter = 0;
		}
		else if (tmp_str.find_first_not_of("1234567890") != std::string::npos)
		{
			std::cout << "Phone number must contain only numbers" << std::endl;
			iter = 0;
		}
		else
		{
			contacts[i].SetPhoneNumber(tmp_str);
			break;
		}
	}
	
	for (int iter = 0; iter < 2; iter++)
	{
		std::cout << BOLDWHITE << "DARKEST SECRET: " << RESET;
		tmp_str.clear();
		// std::getline(std::cin, tmp_str);
		std::cin >> tmp_str;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (tmp_str.empty())
		{
			std::cout << "The field cannot be empty" << std::endl;
			iter = 0;
		}
		else
		{
			contacts[i].SetDarkestSecret(tmp_str);
			break;
		}
	}

	std::cout << GREEN << "Contact #" << WHITE << i << GREEN << " <" << WHITE << contacts[i].GetFirstName() << GREEN <<  "> is successfully added" << RESET << std::endl;
	std::cout << std::endl;
	if (i == 8)
		std::cout << CYAN << "PhoneBook is full. Adding new contact will reset all saved contacts\n\t\t\t>>>*<<<\n" << RESET << std::endl;
	return;
}

void	PhoneBook::searchContact(void)
{
	int	index;
	int	i = 0;

	std::cout << "\nType the index of the contact that you want to be shown: ";
	std::cin >> index;
	if (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << RED << "\nThere is no contact by this index\n" << RESET << std::endl;
		return;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (i < 8 && contacts[i].GetInd() != index)
		i++;
	if (i > 7 || index < 1)
		std::cout << RED << "\nIndex not found\n" << RESET << std::endl;
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
		std::cout << RED << "\nThere is no contacts yet in this PhoneBook\n" << RESET << std::endl;
	else
	{
		std::cout << std::endl;
		std::cout << std::string(45, '-') << std::endl;
		std::cout << BOLDWHITE << "|   index  |first name|last  name| nickname |" << RESET << std::endl;
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
		std::cout << std::right << std::setw(9) << current.GetFirstName().substr(0, 9) << "." << "|";
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