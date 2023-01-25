#include "phonebook.hpp"
#include <iostream>
#include <string>

void put_phonebook(int i, Phonebook *contacts)
{
	int idx = -1;

	std::cout<<std::setw(14) << std::setfill('-') << std::endl;
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	std::cout<<std::setw(14) << std::setfill('-') << std::endl;
	while(++idx < i)
	{
		std::cout<< "|" << std::setw(10) << std::setfill('@') << std::to_string(idx);
		std::cout<< "|" << std::setw(10) << std::setfill('@') << contacts[idx].m_FirstName;
		std::cout<< "|" << std::setw(10) << std::setfill('@') << contacts[idx].m_LastName;
		std::cout<< "|" << std::setw(10) << std::setfill('@') << contacts[idx].m_Nickname << "|" << std::endl;
		std::cout<<std::setw(14) << std::setfill('-') << std::endl;
	}

}
void	search_phonebook(Phonebook *contacts, int i, int flg)
{
	int idx = -1;
	std::string	input_idx;

	if (flg)
		i = flg;
	put_phonebook(i, contacts);
	std::cout << "enter an index...";
	std::getline(std::cin, input_idx);
	while(std::atoi(input_idx.c_str()) > 7)
	{
		std::cout << "Error: worng index number" << std::endl;
		std::getline(std::cin, input_idx);
	}
	std::cout << "phone number: " << contacts[atoi(input_idx.c_str())].m_PhoneNumber << std::endl;
}

int main(void)
{
	Phonebook phonebook[8];

	int			i = 0;
	int			flg = 0;
	std::string	cmd;

	while(cmd != "EXIT")
	{
		std::cout << "phonebook: ready to command..." << std::endl;
		std::cin.clear();
		std::getline(std::cin, cmd);;
		if (cmd == "ADD")
		{
			phonebook[i].add_func();
			i++;
			if (i == 8 )
			{
				i = 0;
				flg = 7;
			}
		}
		else if (cmd == "SEARCH")
		{
			if (i)
				search_phonebook(phonebook, i, flg);
			else
				std::cout << "Contact does not exist" << std::endl;
		}
	}
	std::cout << "bye ╲ʕ·ᴥ·　╲ʔ" << std::endl;
	return 0;
}
