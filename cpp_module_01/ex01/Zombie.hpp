#ifndef _Zombie
#define _Zombie

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string m_name;

public:
	Zombie( const std::string& name_inpt );
	~Zombie();
	void announce( void );
	void setName( const std::string Name );
};

Zombie*	newZombie( std::string name );
void		randomChump( std::string name );

#endif
