#include "Zombie.hpp"


Zombie::Zombie()
{}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << "the zombie " << this->name << " is destroyed\n";
}