#include "Zombie.hpp"

int main()
{
	const int N = 4;
	Zombie *horde = zombieHorde(N, "jason");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
