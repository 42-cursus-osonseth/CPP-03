#include "ScavTrap.hpp"

// Constructors / Destructor
ScavTrap::ScavTrap(){}
ScavTrap::~ScavTrap()
{
    std::cout
    << MAGENTA << "SCAVTRAP destructor is called" << RESET << std::endl;
}
ScavTrap::ScavTrap(std::string n) : ClapTrap (n, 100, 50, 20)
{
     std::cout
    << MAGENTA << "SCAVTRAP constructor is called" << RESET << std::endl;
}
void ScavTrap::guardGate() const
{
    std::cout
    << BLUE_BOLD << getName() << RESET
    << YELLOW_ITALIC << " is now in Gate keeper mode!" << RESET << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout
    << MAGENTA << "SCAVTRAP Copy constructor is called" << RESET
    << std::endl;
    
}
// Operator Overloading
ScavTrap &ScavTrap::operator=(const ScavTrap &other) 
{
    if (this != &other)
    {
        std::cout 
        << MAGENTA << "SCAVTRAP Assignment operator is called" << RESET << std::endl; 
        ClapTrap::operator=(other);
    }
    return *this;
}
// Member functions
void ScavTrap::attack(const std::string &target)
{
    std::cout << RED << "The Scavtrap ";
    ClapTrap::attack(target);
}
