/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:13:41 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/09 15:28:47 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << YELLOW << "FragTrap " << this->name << " New person has been created." << RESET << std::endl;
}

FragTrap::FragTrap(const std::string& name_example) : ClapTrap(name_example)
{
	this->name = name_example;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
	std::cout << YELLOW << "FragTrap " << this->name << " New person has been created." << RESET << std::endl;
}

// Call to the constructor in a copy of the base class, to initialize the corresponding
FragTrap::FragTrap(const FragTrap& constrCopy) : ClapTrap(constrCopy)
{
    	this->name = constrCopy.name;
		this->hitPoints = constrCopy.hitPoints;
		this->energyPoints = constrCopy.energyPoints;
		this->attackDamage = constrCopy.attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& constrCopy)
{
    if (this != &constrCopy)
    {
        this->name = constrCopy.name;
		this->hitPoints = constrCopy.hitPoints;
		this->energyPoints = constrCopy.energyPoints;
		this->attackDamage = constrCopy.attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << YELLOW << "FragTrap " << this->name << " has finished the mision !" << RESET << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	this->nameTarget = target;
	std::cout << std::endl << "                *** ATTACK ***" << std::endl;

	if (this->energyPoints == 0 || this->hitPoints == 0)
	{
		std::cout << this->name << " hasn `t energy points" << std::endl;
		std::cout << this->nameTarget << " or hasn `t hit points" << std::endl;
	}
	else
		this->energyPoints -= 1;
	std::cout << RED << "FragTrap " << this->name << " Attacking " << target << " causing " << this->attackDamage << " points of damage!" << RESET << std::endl;
	std::cout << MAGENTA << "FragTrap " << this->name << " has " << this->energyPoints << " energy points, due to his attack" << RESET << std::endl << std::endl;;
}

void FragTrap::highFivesGuys()
{
    std::cout << PINK << HIGHFIVE << "    Come on, high five guys !!   " << HIGHFIVE << RESET << std::endl << std::endl;;
}

void FragTrap::print()
{
	std::cout << ORANGE << "FragTrap " << this->name << RESET << std::endl
	<< BLUE << "hitPoints " << this->hitPoints << std::endl
	<< "energyPoints " << this->energyPoints << std::endl
	<< "attackDamage " << this->attackDamage << RESET << std::endl << std::endl;
}

