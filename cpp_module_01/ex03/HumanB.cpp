#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( const std::string& name)
	: m_name(name)
{
	std::cout << "Constructor of HumanB is called and initialized" << std::endl;
}

HumanB::~HumanB(){}

void	HumanB::attack()
{
	std::cout << m_name << " attacks with his " << (*m_weapon).getType() << std::endl;
}
void	HumanB::setWeapon( Weapon& weapon )
{
	m_weapon = &weapon;
	std::cout << &m_weapon << std::endl;
	std::cout << &m_weapon << std::endl;
}
