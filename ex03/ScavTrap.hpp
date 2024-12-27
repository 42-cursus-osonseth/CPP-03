#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include "Colors.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
public:
    // Constructors / Destructor
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string n);
    ScavTrap(const ScavTrap &other);
    // Operator Overloading
    ScavTrap &operator=(const ScavTrap &other);
    // Member functions
    void guardGate() const;
    void attack(const std::string &target);
};

#endif