#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *newone = new Zombie;
	newone->setName(name);
	newone->announce();
}
