#ifndef ClapTrap_H
#define ClapTrap_H

#include <string>
#include <iostream>
#include <climits>

class ClapTrap
{
private:
    std::string name;
    unsigned int Health;
    unsigned int Energy;
    unsigned int Attack_damage;

public:

    static const unsigned int MAX_HEALTH = 100;

    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string n, int h, int e, int a);
    ClapTrap(const ClapTrap &other);
    ClapTrap& operator=(const ClapTrap &other);
    const std::string  &getName () const;
    unsigned int getEnergy() const;
    unsigned int getHealth() const;
    unsigned int getAttackDamage() const;
    void setHealth(unsigned int damage);
    void setEnergy();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif