#include "ClapTrap.hpp"

// Constructors / Destructor
ClapTrap::ClapTrap()
{
    std::cout 
    << MAGENTA << "CLAPTRAP default constructor is called" << RESET
    << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout
    << MAGENTA << "CLAPTRAP destructor is called" << RESET
    << std::endl;
}

ClapTrap::ClapTrap(std::string n, int h, int e, int a) : name(n), Health(0), Energy(0), Attack_damage(0)
{
    (h < 0) ? Health = 0 : Health = h;
    (e < 0) ? Energy = 0 : Energy = e;
    (a < 0) ? Attack_damage = 0 : Attack_damage = a;
    printConstructorInfos(n, h, e, a);
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout
    << "CLAPTRAP copy constructor is called"
    << std::endl;
    this->name = other.name;
    this->Health = other.Health;
    this->Energy = other.Energy;
    this->Attack_damage = other.Attack_damage;
}

// Operator Overloading
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        std::cout << "CLAPTRAP assignment operator is called" << std::endl;
        this->name = other.name;
        this->Health = other.Health;
        this->Energy = other.Energy;
        this->Attack_damage = other.Attack_damage;
    }
    return *this;
}

// Getters / Setters
const std::string &ClapTrap::getName() const {return name;}
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
void ClapTrap::printAttack(const std::string &target)
{
    std::cout 
    << BLUE_BOLD << name << RESET 
    << YELLOW_ITALIC << " Attack " << RESET 
    << CYAN_BOLD << target << RESET
    << YELLOW_ITALIC << " causing " << RESET 
    << RED_BOLD << Attack_damage << RESET
    << YELLOW_ITALIC << " points of damage!" << RESET 
    << std::endl;
}
void ClapTrap::printDamage(unsigned int amount)
{
    std::cout 
    << BLUE_BOLD << name << RESET 
    << YELLOW_ITALIC << " taked " << RESET 
    << RED_BOLD << amount << RESET 
    << YELLOW_ITALIC << " points of damage!" << RESET 
    << std::endl;
}
void ClapTrap::printRepaired(unsigned int amount)
{
    std::cout 
    << BLUE_BOLD << name << RESET 
    << YELLOW_ITALIC << " Recover " << RESET
    << RED_BOLD << amount << RESET
    << YELLOW_ITALIC << " life point! " << RESET
    << YELLOW << "(health: " << RESET
    << GREEN << Health << RESET
    << YELLOW << ")" << RESET
    << std::endl;
}
void ClapTrap::printConstructorInfos(std::string n, int h, int e, int a)
{
    std::cout
    << MAGENTA << "CLAPTRAP constructor is called" << RESET << std::endl
    << YELLOW << "(Player info) :"
    << std::endl
    << YELLOW << "Name   : " << RESET
    << n << std::endl
    << YELLOW << "Health : " << RESET
    << h << std::endl
    << YELLOW << "Energy : " << RESET
    << e << std::endl
    << YELLOW << "Attack : " << RESET
    << a << std::endl << std::endl;
}