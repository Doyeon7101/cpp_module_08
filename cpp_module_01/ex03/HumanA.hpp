#ifndef _HUMANA_HPP
#define _HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	m_name;
		Weapon		&m_weapon;

	public:
		HumanA( const std::string &name, Weapon &weapon );
		~HumanA();
		void	attack();
};
#endif
