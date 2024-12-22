#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


int main ()
{
    ClapTrap clap ("Bob", 10, 10, 0);
    ScavTrap scav ("Max", 100, 50, 20);
    FragTrap frag ("Tom", 100, 100, 30);

    scav.guardGate();
    frag.highFivesGuy();
    
    return 0;
}