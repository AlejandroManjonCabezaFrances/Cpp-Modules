#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <iomanip>

class ScavTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(const ScavTrap& constrCopy);
        ScavTrap& operator=(const ScavTrap& constrCopy);
        ~ScavTrap();
};

std::ostream& operator<<(std::ostream &output, const ScavTrap& constrCopy);

#endif
