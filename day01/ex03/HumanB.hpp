#ifndef __HUMAN_B__HPP__
#define __HUMAN_B__HPP__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string  name);
		void setWeapon(Weapon &Weapon);
		void attack(void) const;
};
#endif