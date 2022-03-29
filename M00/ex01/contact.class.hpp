#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact {
public:
	Contact()
		: first_name("fname")
		, last_name("lname")
		, nickname("nick")
		, phone_number("00000000000")
		, darkest_secret("secret")
	{}
	~Contact();
	

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;



};

#endif
