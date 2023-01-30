#ifndef _Zombie
#define _Zombie

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string m_name;

public:
	Zombie( const std::string& name_inpt )
		: m_name(name_inpt)
	{}
	~Zombie()
	{ std::cout << "Destructor called for <" << m_name << ">" <<std::endl; }

public:
	void announce(void)
	{ std::cout << "<" << m_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl; }
};

Zombie*	newZombie( std::string name );
void		randomChump( std::string name );

#endif
