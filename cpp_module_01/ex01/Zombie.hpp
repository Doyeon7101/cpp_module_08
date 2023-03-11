#ifndef _Zombie
#define _Zombie

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string m_name;

public:
	Zombie();
	~Zombie();
	void announce( void );
	void setName( const std::string Name );
};

Zombie* zombieHorde( int N, std::string name );


#endif
