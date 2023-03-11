#include "Weapon.hpp"

Weapon::Weapon(){};
Weapon::Weapon( const std::string &WeaponName)
	: m_Weapon(WeaponName) 
{
	std::cout << "Constructor of Weapon is called and initialized" << std::endl;
}

Weapon::~Weapon(){};

void		Weapon::setType( std:: string WeaponName )
{
	m_Weapon =  WeaponName;
}

std::string	Weapon::getType()
{
	return m_Weapon;
}
