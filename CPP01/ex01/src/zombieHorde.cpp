#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
		return 0;
		
	Zombie*	horde = new Zombie[N];
	if (!horde)
		return 0;
	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return (horde);
}