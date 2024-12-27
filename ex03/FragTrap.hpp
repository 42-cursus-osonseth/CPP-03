#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include "Colors.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
    // Constructors / Destructor
    FragTrap();
    ~FragTrap();
    FragTrap(std::string n);
    FragTrap(const FragTrap &other);
    // Operator Overloading
    FragTrap &operator=(const FragTrap &other);
    // Member functions
    void highFivesGuys(void);
    void attack(const std::string &target);
};


#endif