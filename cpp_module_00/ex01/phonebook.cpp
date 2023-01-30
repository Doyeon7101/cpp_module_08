#include "phonebook.hpp"
#include <stdexcept>

void	Phonebook::add_func()
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
	std::cout << "Added successfully!" << std::endl;
}

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

	if (flg)
		i = flg;
	put_phonebook(i, contacts);
	std::cout << "enter an index...";
	std::string	input_idx;
		while(1)
	{
		try
		{
			getline(std::cin, input_idx);
			if (std::cin.eof())
			{
				std::cin.clear();
				std::clearerr(stdin);
			}
			const int idx = std::stoi(input_idx);
			throw idx;
		}
		catch(std::invalid_argument const& ex)
		{
			std::cout << "Error: invalid_argument" << std::endl;
		}
		catch(std::out_of_range const& ex)
		{
			std::cout << "Error: out_of_range " << std::endl;
		}
		catch (int idx)
		{
			if (idx > 7)
				std::cout << "Error: Wrong index number" << std::endl;
			else
				break;
		}
	}
	std::cout << "phone number: " << contacts[std::stoi(input_idx)].m_PhoneNumber << std::endl;
}

int main(void)
{
	Phonebook phonebook[8];

	int			i = 0;
	int			flg = 0;

	std::string	cmd;
	while(cmd != "EXIT" || std::cin.eof() == false)
	{
		if (cmd != "")
			std::cout << "phonebook: ready to command(ADD, SEARCH, EXIT)..." << std::endl;
		std::cin.clear();
		std::clearerr(stdin);
		std::getline(std::cin, cmd);;
		/* if (std::cin.eof()) */
		/* { */
		/* 	std::cin.clear(); */
		/* 	std::clearerr(stdin); */
		/* } */
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
		else
		{
			if (cmd != "")
				std::cout << "Invalid command. Please check again." << std::endl;
		}

	}
	std::cout << "bye ╲ʕ·ᴥ·　╲ʔ" << std::endl;
	return 0;
}
