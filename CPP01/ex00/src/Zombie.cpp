#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Hi, i'm " << name << ". I will bite you from now on!\n";
}

Zombie::~Zombie()
{
	std::cout << "Ugh..., " << this->name << " is died.....\n";
}

void	Zombie::anounce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
