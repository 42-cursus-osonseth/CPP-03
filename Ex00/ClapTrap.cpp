#include "ClapTrap.hpp"

// Constructors / Destructor
ClapTrap::ClapTrap()
{
    std::cout 
    << MAGENTA << "CLAPTRAP Default constructor is called" << RESET
    << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout
    << MAGENTA << "CLAPTRAP Destructor is called" << RESET
    << std::endl;
}

ClapTrap::ClapTrap(std::string n) : Name(n), Health(10), Energy(10), Attack_damage(0)
{
    std::cout
    << MAGENTA << "CLAPTRAP Constructor is called" << RESET << std::endl;
    printInfos();
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout
    << MAGENTA << "CLAPTRAP Copy constructor is called" << RESET
    << std::endl;
    this->Name = other.Name;
    this->Health = other.Health;
    this->Energy = other.Energy;
    this->Attack_damage = other.Attack_damage;
}

// Operator Overloading
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        std::cout 
        << MAGENTA << "CLAPTRAP Assignment operator is called" << RESET << std::endl; 
        this->Name = other.Name;
        this->Health = other.Health;
        this->Energy = other.Energy;
        this->Attack_damage = other.Attack_damage;
    }
    return *this;
}

// Getters / Setters
const std::string &ClapTrap::getName() const {return Name;}
unsigned int ClapTrap::getEnergy() const {return Energy;}
unsigned int ClapTrap::getHealth() const {return Health;}
unsigned int ClapTrap::getAttackDamage() const {return Attack_damage;}
void ClapTrap::setHealth(unsigned int new_health) {Health = new_health;}
void ClapTrap::setEnergy() { if (Energy > 0)Energy--;}

// Member functions
void ClapTrap::attack(const std::string &target)
{
    if (Energy > 0)
    {
        printAttack(target);
        setEnergy();
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    (amount > Health) ? setHealth(0) : setHealth(Health - amount);
    printDamage(amount);
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
    printRepaired(amount);
}
// Member PRINT functions
void ClapTrap::printAttack(const std::string &target) const
{
    std::cout 
    << BLUE_BOLD << Name << RESET 
    << YELLOW_ITALIC << " Attack " << RESET 
    << CYAN_BOLD << target << RESET
    << YELLOW_ITALIC << " causing " << RESET 
    << RED_BOLD << Attack_damage << RESET
    << YELLOW_ITALIC << " points of damage!" << RESET 
    << std::endl;
}
void ClapTrap::printDamage(unsigned int amount) const
{
    std::cout 
    << BLUE_BOLD << Name << RESET 
    << YELLOW_ITALIC << " taked " << RESET 
    << RED_BOLD << amount << RESET 
    << YELLOW_ITALIC << " points of damage!" << RESET 
    << std::endl;
}
void ClapTrap::printRepaired(unsigned int amount) const
{
    std::cout 
    << BLUE_BOLD << Name << RESET 
    << YELLOW_ITALIC << " Recover " << RESET
    << RED_BOLD << amount << RESET
    << YELLOW_ITALIC << " life point! " << RESET
    << YELLOW << "(health: " << RESET
    << GREEN << Health << RESET
    << YELLOW << ")" << RESET
    << std::endl;
}
void ClapTrap::printInfos() const
{
    std::cout
    << YELLOW << "(Player info) :"
    << std::endl
    << YELLOW << "Name   : " << RESET
    << Name << std::endl
    << YELLOW << "Health : " << RESET
    << Health << std::endl
    << YELLOW << "Energy : " << RESET
    << Energy << std::endl
    << YELLOW << "Attack : " << RESET
    << Attack_damage << std::endl << std::endl;
}