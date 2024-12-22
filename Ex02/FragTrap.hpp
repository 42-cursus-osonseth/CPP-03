#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include "Colors.hpp"

class FragTrap : public ClapTrap
{
private:
    
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string n, unsigned int h, unsigned int e, unsigned int a);
    void highFivesGuy();
};


#endif