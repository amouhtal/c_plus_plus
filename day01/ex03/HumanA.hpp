#ifndef __HUMAN_A__HPP__
#define __HUMAN_A__HPP__

#include <iostream>
#include <string>
#include "Weapon.hpp"


class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string  name, Weapon &weapon);
	void attack(void) const;
};
#endif