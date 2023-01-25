#ifndef _ZOMBIE
#define _ZOMBIE

#include	<iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string name_input)
			: _name(name_input)
		{ announce(); }
		~Zombie()
		{ std:: cout << "<" << _name << ">" ;}

		void	announce(void)
		{ std::cout << "<" << _name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl; }
};

#endif
