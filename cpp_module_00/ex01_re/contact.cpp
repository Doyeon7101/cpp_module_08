#include "contact.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

void Contact::setFirstName(std::string inpt) { m_FirstName = inpt;}

void Contact::setLastName(std::string inpt) { m_LastName = inpt; }

void Contact::setNicknName(std::string inpt) { m_Nickname = inpt; }

void Contact::setPhoneNumber(std::string inpt) { m_PhoneNumber = inpt; }

void Contact::setDarkestSecret(std::string inpt) { m_DarkestSecret = inpt; }

void Contact::display()
{
	std::cout<< "|" << std::setw(10) << std::setfill('@') << m_FirstName;
	std::cout<< "|" << std::setw(10) << std::setfill('@') << m_LastName;
	std::cout<< "|" << std::setw(10) << std::setfill('@') << m_Nickname << "|" << std::endl;
	std::cout<<std::setw(14) << std::setfill('-') << std::endl;

}
