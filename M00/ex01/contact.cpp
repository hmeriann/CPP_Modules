#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void	initContact(Contact *contact)
{
	for (int i = 0; i < 9; i++)
		contact[i].ind = 0;
}

void	Contact::addFirstName(Contact *contact)
{
	while (1)
	{
		std::cout << BOLDWHITE << "FIRST NAME: " << RESET;
		getline(std::cin, contact->firstName);
		if (contact->firstName.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break;
	}
	return;
}

void	Contact::addLastName(Contact *contact)
{
	while (1)
	{
		std::cout << BOLDWHITE << "LAST NAME: " << RESET;
		getline(std::cin, contact->lastName);
		if (contact->lastName.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break;
	}
	return;
}

void	Contact::addNickName(Contact *contact)
{
	while (1)
	{
		std::cout << BOLDWHITE << "NICKNAME: " << RESET;
		getline(std::cin, contact->nickName);
		if (contact->nickName.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break;
	}
	return;
}

void	Contact::addPhoneNumber(Contact *contact)
{
	while (1)
	{
		std::cout << BOLDWHITE << "PHONE NUMBER: " << RESET;
		getline(std::cin, contact->phoneNumber);
		if (contact->phoneNumber.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else if (contact->phoneNumber.find_first_not_of("1234567890") != std::string::npos)
			std::cout << "Phone number must contain onlu numbers" << std::endl;
		else
			break;
	}
	return;
}

void	Contact::addDarkestSecret(Contact *contact)
{
	while (1)
	{
		std::cout << BOLDWHITE << "DARKEST SECRET: " << RESET;
		getline(std::cin, contact->darkestSecret);
		if (contact->darkestSecret.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break;
	}
	return;;
}
