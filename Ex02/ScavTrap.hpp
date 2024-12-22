#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include "Colors.hpp"

class ScavTrap : public ClapTrap
{
private:
    
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string n, unsigned int h, unsigned int e, unsigned int a);
    void guardGate();
};



#endif