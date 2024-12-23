#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("bob");
    FragTrap b = a;
    FragTrap c("Max");
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

        a.highFivesGuys();
        b.highFivesGuys();
       
    }

    return 0;
}