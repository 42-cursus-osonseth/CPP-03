#include "ClapTrap.hpp"

int main()
{
    ClapTrap a ("Bob", 10, 20, 0);
    ClapTrap b ("Max" , 10, 10, 0);

    std::cout << "--------------------------------------------------" << std::endl;

    while (a.getEnergy() > 0 || b.getEnergy() > 0)
    {
     
        a.beRepaired(2);
        b.beRepaired(3);
        std::cout << std::endl;
        a.attack(b.getName());
        b.takeDamage(a.getAttackDamage());
        b.attack(a.getName());
        a.takeDamage(b.getAttackDamage());
        std::cout << std::endl;
    }

    return 0;
}