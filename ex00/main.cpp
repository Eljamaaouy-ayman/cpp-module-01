#include "Zombie.hpp"

int main()
{
    Zombie zombie("hbil");
    zombie.announce();
    Zombie* zz = newZombie("bo3o");
    zz->announce();
    randomChump("boo");
    delete zz;
}