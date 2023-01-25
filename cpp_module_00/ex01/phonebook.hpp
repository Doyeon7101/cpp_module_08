#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>

class Phonebook
{
	public:
		std::string	m_FirstName;
		std::string	m_LastName;
		std::string	m_Nickname;
		std::string	m_PhoneNumber;
		std::string	m_DarkestSecret;
		void	add_func()
		{
			std::cout << "Add a contact to my phonebook ..." << std::endl;
			std::cout << "first name: ";
			std::cin >> m_FirstName;
			std::cout << "last name: ";
			std::cin >> m_LastName;
			std::cout << "nickname: ";
			std::cin >> m_Nickname;
			std::cout << "phone number: ";
			std::cin >> m_PhoneNumber;
			std::cout << "darkest secret: ";
			std::cin >> m_DarkestSecret;
			std::cout << "Added successfully!"<< std::endl;
		}
};
