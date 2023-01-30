#include "phonebook.hpp"
#include <iomanip>
#include <string>

void Phonebook::add(const int idx)
{
	std::string cmd[5] = {"first name: ", "last name: ", "nickname: ", "phonenumber: ", "DarkestSecret: "};
	std::cout << "Add a contact to my phonebook ..." << std::endl;
	std::string ipt;
	std::cout << cmd[0] << std::endl;
	getline(std::cin, ipt);
	contacts[idx].setFirstName(ipt);
	std::cout << cmd[1] << std::endl;
	getline(std::cin, ipt);
	contacts[idx].setLastName(ipt);
	std::cout << cmd[2] << std::endl;
	getline(std::cin, ipt);
	contacts[idx].setNicknName(ipt);
	std::cout << cmd[3] << std::endl;
	getline(std::cin, ipt);
	contacts[idx].setPhoneNumber(ipt);
	std::cout << cmd[4] << std::endl;
	getline(std::cin, ipt);
	contacts[idx].setDarkestSecret(ipt);
	std::cout <<"Added successfully!" << std::endl;
}

void Phonebook::displayall(const int idx)
{
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	for(int i = 0; i < idx; i++)
	{
		std::cout<< "|" << std::setw(10) << std::setfill('@') << std::to_string(idx);
		contacts[i].display();
		std::cout << std::setw(14) << std::setfill('-') << std::endl;
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

}

int main()
{
	Phonebook phonebook;
	std::string cmd;
	int idx = 0;
	int flg = 9;

	do
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::getline(std::cin, cmd);
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

	}
	while(std::cin.eof() == false || cmd != "EXIT");
	std::cout << "bye" << std::endl;
	return 0;
}
