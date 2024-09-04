/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 03:37:20 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/04 15:48:26 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << YELLOW << "ScavTrap " << this->name << " New person has been created." << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

// Call to the constructor in a copy of the base class, to initialize the corresponding
ScavTrap::ScavTrap(const ScavTrap& constrCopy) : ClapTrap(constrCopy)
{
    this->name = constrCopy.name;
	this->hitPoints = constrCopy.hitPoints;
	this->energyPoints = constrCopy.energyPoints;
	this->attackDamage = constrCopy.attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& constrCopy)
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

ScavTrap::~ScavTrap()
{
    std::cout << YELLOW << "ScavTrap " << this->name << " has finished the mision !" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
/* 	std::string inputDamage;
	int			countDamage; */

	this->nameTarget = target;
	this->energyPoints -= 1;
	std::cout << std::endl << "                *** ATTACK ***" << std::endl;
	/* std::cout << "Enter attackDamage value you want (1-9): " << std::endl; */
/* 	while (1)
	{
		if (std::cin.eof())
			break; */
		if (this->energyPoints == 0 || this->hitPoints == 0)
		{
			std::cout << this->name << " hasn `t energy points" << std::endl;
			std::cout << this->nameTarget << " or hasn `t hit points" << std::endl;
			/* break; */
		}
/* 		std::cin >> inputDamage;
		if (!inputDamage.empty() && areAllDigits(inputDamage))
		{
			countDamage = atoi(inputDamage.c_str());
			this->attackDamage = countDamage; 
			break;
		}
		else
			std::cout << "Enter only numbers from 1 to 9, please !" << std::endl; */
	/* } */
	std::cout << RED << "ScavTrap " << this->name << " Attacking " << target << " causing " << this->attackDamage << " points of damage!" << RESET << std::endl;
	std::cout << MAGENTA << "ScavTrap " << this->name << " has " << this->energyPoints << " energy points, due to his attack" << RESET << std::endl << std::endl;;
}

void ScavTrap::guardGate()
{
    std::cout << TEAL << "ScavTrap " << this->name << " is now in Gate keeper mode" << RESET << std::endl << std::endl;
}

void ScavTrap::print()
{
	std::cout << ORANGE << "ScavTrap " << this->name << RESET << std::endl
	<< BLUE << "hitPoints " << this->hitPoints << std::endl
	<< "energyPoints " << this->energyPoints << std::endl
	<< "attackDamage " << this->attackDamage << RESET << std::endl << std::endl;
}
