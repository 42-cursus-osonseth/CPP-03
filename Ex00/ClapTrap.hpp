#ifndef ClapTrap_H
#define ClapTrap_H

#include <string>
#include <iostream>
#include "Colors.hpp"

class ClapTrap
{
private:
    std::string Name;
    unsigned int Health;
    unsigned int Energy;
    unsigned int Attack_damage;
    static const unsigned int MAX_HEALTH = 100;

public:
    // Constructors / Destructor
    ClapTrap();
    ClapTrap(std::string n);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();

    // Operator Overloading
    ClapTrap &operator=(const ClapTrap &other);

    // Getters / Setters
    const std::string &getName() const;
    unsigned int getEnergy() const;
    unsigned int getHealth() const;
    unsigned int getAttackDamage() const;
    void setHealth(unsigned int damage);
    void setEnergy();

    // Member functions
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void printAttack(const std::string &target);
    void printDamage(unsigned int amount);
    void printRepaired(unsigned int amount);
    void printInfos();
};

#endif