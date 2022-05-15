#include "Zombie.hpp"

int	main()
{
	std::cout << "========= Stack Zombie =========\n\n";

	// stack
	{
		randomChump("Rick Grimes");
		randomChump("Shane Walsh");
		randomChump("Daryl Dixon");
		randomChump("Glenn Rhee");
	}

	std::cout << "\n\n\n========= Heap Zombie =========\n\n";

	// heap
	{
		Zombie* z1 = newZombie("Rick Grimes");
		Zombie* z2 = newZombie("Shane Walsh");
		Zombie* z3 = newZombie("Daryl Dixon");
		Zombie* z4 = newZombie("Glenn Rhee");

		z1->anounce();
		z2->anounce();
		z3->anounce();
		z4->anounce();

		delete z1;
		delete z2;
		delete z3;
		delete z4;
	}

	return 0;
}