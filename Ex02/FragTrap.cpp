#include "FragTrap.hpp"

// Constructors / Destructor
FragTrap::FragTrap(){}
FragTrap::~FragTrap()
{
    std::cout
    << MAGENTA << "FRAGTRAP destructor is called" << RESET << std::endl;
}
FragTrap::FragTrap(std::string n) : ClapTrap (n, 100, 100, 30)
{
     std::cout
    << MAGENTA << "FRAGTRAP constructor is called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout
    << MAGENTA << "FRAGTRAP Copy constructor is called" << RESET
    << std::endl;
    
}
// Operator Overloading
FragTrap &FragTrap::operator=(const FragTrap &other) 
{
    if (this != &other)
    {
        std::cout 
        << MAGENTA << "FRAGTRAP Assignment operator is called" << RESET << std::endl; 
        ClapTrap::operator=(other);
    }
    return *this;
}
// Member functions
void FragTrap::attack(const std::string &target)
{
    std::cout << RED << "The FragTrap ";
    ClapTrap::attack(target);
}
void FragTrap::highFivesGuys(void)
{
    std::cout
    << BLUE_BOLD << getName() << RESET
    << YELLOW_ITALIC << " come on, guys! High five time!" << RESET << std::endl;
}