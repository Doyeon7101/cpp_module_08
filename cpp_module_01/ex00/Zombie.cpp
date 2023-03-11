#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie()
{
	std::cout << "Destructor called for <" << m_name << ">" <<std::endl;
}

	void Zombie::setName( std::string& name_inpt)
{
	m_name = name_inpt;
}

void Zombie::announce(void)
{ std::cout << "<" << m_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl; }
