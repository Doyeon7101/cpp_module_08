#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *newone = new Zombie(name);
	newone->announce();
}
