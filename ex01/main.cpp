#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("bob");
    ScavTrap b = a;
    ScavTrap c("Max");
  
    a = c;

    a.printInfos();
    b.printInfos();

    while ((a.getHealth() > 0 || b.getHealth() > 0) && (a.getEnergy() > 0 || b.getEnergy() > 0))
    {
        a.beRepaired(15);
        b.beRepaired(15);
        a.attack(b.getName());
        b.takeDamage(a.getAttackDamage());
        b.attack(a.getName());
        a.takeDamage(b.getAttackDamage());
        a.guardGate();
        b.guardGate();
        
       
    }

    return 0;
}