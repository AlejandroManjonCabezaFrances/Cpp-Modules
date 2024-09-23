#ifndef BRAIN_HPP
#define BRAIN_HPP

/* #include "Dog.hpp"
#include "Cat.hpp" */

#include <iostream>
#include <iomanip>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& constrCopy);
        Brain& operator=(const Brain& constrCopy);
        ~Brain();
};

#endif
