#include "phonebook.hpp"
#include <iomanip>
#include <string>

std::string get_line()
{
	std::string rtn;
	while (!std::cin.eof())
	{
		getline(std::cin, rtn);
		if (std::cin.eof())
			break;
		if (rtn == "")
			std::cout << "Invalid input format, try again" << std::endl;
		else
			return rtn;
	}
	exit(0);
}

void Phonebook::add(const int idx)
{
	std::string cmd[5] = {"first name: ", "last name: ", "nickname: ", "phonenumber: ", "DarkestSecret: "};
	std::cout << "Add a contact to my phonebook ..." << std::endl;
	std::cout << cmd[0] << std::endl;
	contacts[idx].setFirstName(get_line());
	std::cout << cmd[1] << std::endl;
	contacts[idx].setLastName(get_line());
	std::cout << cmd[2] << std::endl;
	contacts[idx].setNicknName(get_line());
	std::cout << cmd[3] << std::endl;
	contacts[idx].setPhoneNumber(get_line());
	std::cout << cmd[4] << std::endl;
	contacts[idx].setDarkestSecret(get_line());
	std::cout << "Added successfully!" << std::endl;
}

void Phonebook::displayall(const int idx)
{
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	std::cout << std::setw(46) << std::setfill('-') << '\0' << std::endl;
	for(int i = 0; i < idx; i++)
	{
		std::cout<< "|" << std::setw(10) << std::setfill(' ') << std::to_string(i);
		contacts[i].display();
	}
}

void	Phonebook::search(const int i, const int flg)
{
	if (!i)
	{
		std::cout << "Contact does not exist" << std::endl;
		return ;
	}
	displayall(i);
	while(1)
	{
		try
		{
			std::string idx = get_line();
		}
	}

}

int main()
{
	Phonebook phonebook;
	std::string cmd;
	int idx = 0;
	int flg = 9;

	while (cmd != "EXIT")
	{
		std::cin.clear();
		std::clearerr(stdin);
		cmd = get_line();
		if (cmd == "ADD")
		{
			phonebook.add(idx);
			idx++;
			if (idx == 8)
			{
				idx = 0;
				flg = 7;
			}
		}
		else if(cmd == "SEARCH")
		{
			phonebook.search(idx, flg);
		}
		else if(cmd != "EXIT")
		{
			std::cout << "Invalid input format, try again" << std::endl;
		}
	}
	std::cout << "bye" << std::endl;
	return 0;
}
