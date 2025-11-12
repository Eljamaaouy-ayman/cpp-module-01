#include "HumanB.hpp"


HumanB::~HumanB()
{}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}