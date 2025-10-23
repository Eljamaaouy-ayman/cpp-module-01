#include "Zombie.hpp"

int main()
{
    Zombie* z = zombieHorde(3, "ayman");
    delete[] z;
}