#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << "the Zombie "<< this->name <<" is destroyed\n";
}
