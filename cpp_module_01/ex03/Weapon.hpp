#ifndef _WEAPON_HPP
#define _WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	m_Weapon;

	public:
		Weapon();
		Weapon( const std::string& WeaponName );
		~Weapon();
		void			setType( std::string WeaponName );
		std::string	getType();
};

#endif
