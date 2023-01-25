#include <cstdlib>
#include <iostream>
#include <cstring> // c스타일의 문자열 라이브러리
#include <string> // to use string class
#include <iomanip>

class Phonebook
{
	public:
		std::string	m_FirstName;
		std::string	m_LastName;
		std::string	m_Nickname;
		std::string	m_PhoneNumber;
		std::string	m_DarkestSecret;

		void	add_func();
};
