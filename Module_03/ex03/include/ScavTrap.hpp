#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <iomanip>

/* • Name, which is passed as parameter to a constructor
• Hit points (100), represent the health of the ClapTrap
• Energy points (50)
• Attack damage (20)
ScavTrap will also have its own special capacity:
void guardGate();
This member function will display a message informing that ScavTrap is now in Gate
keeper mode. */

// virtual public --> Multiple inheritance and possible polymorphism

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string& _name);
        ScavTrap(const ScavTrap& constrCopy);
        ScavTrap& operator=(const ScavTrap& constrCopy);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
        void print();
};

#endif
