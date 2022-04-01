#include "Contact.hpp"

/* constructor */

Contact::Contact()
{
	return;
}

/* destructor */

Contact::~Contact()
{
	return;
}

/* getters */

	int			Contact::GetInd(void) const { return ind; }
	std::string	Contact::GetFirstName(void) const { return firstName; }
	std::string	Contact::GetLastName(void) const { return lastName; }
	std::string	Contact::GetNickName(void) const { return nickName; }
	std::string	Contact::GetPhoneNumber(void) const { return phoneNumber; }
	std::string	Contact::GetDarkestSecret(void) const { return darkestSecret; }

/* setters */

	void		Contact::SetInd(int i){ ind = i; }
	void		Contact::SetFirstName(std::string fn){ firstName = fn; }
	void		Contact::SetLastName(std::string ln){ lastName = ln; }
	void		Contact::SetNickName(std::string nn){ nickName = nn; }
	void		Contact::SetPhoneNumber(std::string pn){ phoneNumber = pn; }
	void		Contact::SetDarkestSecret(std::string ds){  darkestSecret = ds; }
