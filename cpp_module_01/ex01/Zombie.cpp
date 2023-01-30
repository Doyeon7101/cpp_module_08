#include "Zombie.hpp"

Zombie::Zombie( const std::string& name_inpt )
{}
Zombie::~Zombie()
{ std::cout << "Destructor called for <" << m_name << ">" <<std::endl; }

void Zombie::announce(void)
{ std::cout << "<" << m_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl; }
