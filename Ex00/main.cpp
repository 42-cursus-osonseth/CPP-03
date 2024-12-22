#include "ClapTrap.hpp"

int main()
{
    ClapTrap a ("Bob", 10, 10, 1);
    ClapTrap b ("Max" , 10, 10, 0);

    while (a.getEnergy() > 0 || b.getEnergy() > 0)
    {
     
        a.beRepaired(2);
        b.beRepaired(3);
        a.attack(b.getName());
        b.takeDamage(a.getAttackDamage());
        b.attack(a.getName());
        a.takeDamage(b.getAttackDamage());
    }

    return 0;
}