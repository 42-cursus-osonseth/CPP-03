#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor is called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string n, int h, int e, int a) : name(n), Health(0), Energy(0), Attack_damage(0)
{
    (h < 0) ? Health = 0 : Health = h;
    (e < 0) ? Energy = 0 : Energy = e;
    (a < 0) ? Attack_damage = 0 : Attack_damage = a;
    std::cout << "Constructor is called" << std::endl;
    std::cout
        << "Name   : " << name << std::endl
        << "Health : " << Health << std::endl
        << "Energy : " << Energy << std::endl
        << "Attack : " << Attack_damage << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor is called" << std::endl;
    this->name = other.name;
    this->Health = other.Health;
    this->Energy = other.Energy;
    this->Attack_damage = other.Attack_damage;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        std::cout << "Assignment operator is called" << std::endl;
        this->name = other.name;
        this->Health = other.Health;
        this->Energy = other.Energy;
        this->Attack_damage = other.Attack_damage;
    }
    return *this;
}

const std::string &ClapTrap::getName() const
{
    return name;
}
unsigned int ClapTrap::getEnergy() const
{
    return Energy;
}
unsigned int ClapTrap::getHealth() const
{
    return Health;
}
unsigned int ClapTrap::getAttackDamage() const
{
    return Attack_damage;
}
void ClapTrap::setHealth(unsigned int new_health)
{
    Health = new_health;
}
void ClapTrap::setEnergy()
{
    Energy--;
}

void ClapTrap::attack(const std::string &target)
{
    if (Energy > 0)
    {
        std::cout << name << " Attack " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
        setEnergy();
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    (amount > Health) ? setHealth(0) : setHealth(Health - amount);
    std::cout << name << " taked " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{

    if (amount > MAX_HEALTH - Health)
    {
        setHealth(MAX_HEALTH);
        setEnergy();
    }
    else
    {
        setHealth(Health + amount);
        setEnergy();
    }
    std::cout << name << " Recover " << amount << " life point!" << "(health: " << Health << ")"<< std::endl;
}