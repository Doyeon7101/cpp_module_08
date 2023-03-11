#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *newone = new Zombie;
	newone->setName(name);
	return newone;
}

