#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie()
{ std::cout << "Destructor called for <" << m_name << ">" <<std::endl; }

void Zombie::announce(void)
{ std::cout << "<" << m_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl; }

void Zombie::setName(const std::string Name)
{
	m_name = Name;
}
