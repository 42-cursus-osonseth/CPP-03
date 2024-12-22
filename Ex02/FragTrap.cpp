#include "FragTrap.hpp"

// Constructors / Destructor
FragTrap::FragTrap(){}
FragTrap::~FragTrap()
{
    std::cout
    << MAGENTA << "FRAGTRAP destructor is called" << RESET << std::endl;
}
FragTrap::FragTrap(std::string n, unsigned int h, unsigned int e, unsigned int a) : ClapTrap (n, h, e, a)
{
     std::cout
    << MAGENTA << "FRAGTRAP constructor is called" << RESET << std::endl;
}
void FragTrap::highFivesGuy()
{
    std::cout
    << YELLOW_BOLD "FRAGTRAP " << RESET
    << BLUE_BOLD << getName() << RESET
    << YELLOW_ITALIC << " requests a high five!" << RESET << std::endl;
}