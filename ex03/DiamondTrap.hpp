#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string Name;

public:
    // Constructors / Destructor
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string n);
    DiamondTrap(const DiamondTrap &other);
    // Operator Overloading
    DiamondTrap &operator=(const DiamondTrap &other);
    // getters/setters
    const std::string getName();
    // Member functions
    void attack(const std::string &target);
    void whoAmI();
};

#endif