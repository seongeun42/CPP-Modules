#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Hi, i'm Nonamed Zombie. I will bite you from now on!\n";
}

Zombie::~Zombie()
{
	std::cout << "Ugh..., " << this->name << " is died.....\n";
}

void	Zombie::anounce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}