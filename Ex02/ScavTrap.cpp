#include "ScavTrap.hpp"

// Constructors / Destructor
ScavTrap::ScavTrap(){}
ScavTrap::~ScavTrap()
{
    std::cout
    << MAGENTA << "SCAPTRAP destructor is called" << RESET << std::endl;
}
ScavTrap::ScavTrap(std::string n, unsigned int h, unsigned int e, unsigned int a) : ClapTrap (n, h, e, a)
{
     std::cout
    << MAGENTA << "SCAPTRAP constructor is called" << RESET << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout
    << YELLOW_BOLD "SCAVTRAP " << RESET
    << BLUE_BOLD << getName() << RESET
    << YELLOW_ITALIC << " is now in Gate keeper mode!" << RESET << std::endl;
}
