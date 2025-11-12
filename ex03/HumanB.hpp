#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"
class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    
    public:
        void setWeapon(Weapon &weapon){this->weapon = &weapon;}
        HumanB(std::string name){this->name = name;};
        ~HumanB();
        void attack();
};

#endif