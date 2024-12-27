#include "DiamondTrap.hpp"

// Constructors / Destructor
DiamondTrap::DiamondTrap() {}
DiamondTrap::~DiamondTrap()
{
    std::cout
        << MAGENTA << "DIAMONDTRAP destructor is called" << RESET << std::endl;
}
DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name", 100, 50, 30), Name(n)
{
    std::cout
        << MAGENTA << "DIAMONDTRAP constructor is called" << RESET << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    this->Name = other.Name;
    std::cout
    << MAGENTA << "DIAMONDTRAP Copy constructor is called" << RESET
    << std::endl;
    
}
// Getters/Setters
const std::string DiamondTrap::getName() { return Name; }

// Operator Overloading
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) 
{
    if (this != &other)
    {
        std::cout 
        << MAGENTA << "DIAMONDTRAP Assignment operator is called" << RESET << std::endl; 
        ClapTrap::operator=(other);
        this->Name = other.Name;
    }
    return *this;
}

// Member functions
void DiamondTrap::whoAmI()
{
    std::cout
        << YELLOW_BOLD "My clap name is : " << RESET
        << BLUE_BOLD << ClapTrap::getName() << RESET << std::endl
        << YELLOW_BOLD "My name is      : " << RESET
        << BLUE_BOLD << getName() << RESET
        << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}