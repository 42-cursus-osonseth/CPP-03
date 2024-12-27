#include "ClapTrap.hpp"

int main()
{
   ClapTrap a ("bob");
   ClapTrap b = a;
   ClapTrap c("Max");
   a = c;

   b.printInfos();

    while (a.getEnergy() > 0 || b.getEnergy() > 0)
    {
        a.attack(b.getName());
        b.takeDamage(a.getAttackDamage());
        b.attack(a.getName());
        a.takeDamage(b.getAttackDamage());
        a.beRepaired(5);
        b.beRepaired(0);
    }

    return 0;
}