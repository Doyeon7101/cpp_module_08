#include "HumanA.hpp"

HumanA::HumanA( const std::string& name, Weapon& weapon )
	: m_name(name), m_weapon(weapon) 
{
	std::cout << "Constructor of HumanA is called and initialized" << std::endl;
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << m_name << " attacks with his " << m_weapon.getType() << std::endl;
}
