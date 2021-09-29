#include "FragTrap.hpp"

int main()
{
    FragTrap instance1;
    FragTrap instance2("fragtrap");
    instance1(instance2);

    instance1.highFivesGuys();
}