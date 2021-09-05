#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include<iostream>


class Weapon
{
    std::string type;
    public :
        Weapon(std::string type);
        std::string const    &getType();
        void            setType(std::string type);
};
#endif