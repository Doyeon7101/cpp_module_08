#ifndef _HUMANB_HPP
#define _HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	m_name;
		Weapon		*m_weapon;

	public:
		HumanB( const std::string& name);
		~HumanB();
		void	setWeapon( Weapon& weapon );
		void	attack();

};
#endif
