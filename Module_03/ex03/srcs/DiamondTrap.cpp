/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:33:44 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/09 15:25:28 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

/* • ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << YELLOW << "ScavTrap " << this->name << " New person has been created." << RESET << std::endl;
}
 */

DiamondTrap::DiamondTrap()
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << YELLOW << "DiamondTrap " << this->name << " New person has been created." << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& _name)
	: ScavTrap(_name + "_clap_name"), FragTrap(_name + "_clap_name")
{
	this->name = _name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& constrCopy)
	: ClapTrap(constrCopy), ScavTrap(constrCopy), FragTrap(constrCopy), name(constrCopy.name)
{
	this->name = constrCopy.name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& constrCopy)
{
    if (this != &constrCopy)
        this->name = constrCopy.name;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << YELLOW << "FragTrap " << this->name << " has finished the mision !" << RESET << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap ** My name recently is: " << this->name << std::endl;
	std::cout << "ClapTrap ** My name is this class is: " << FragTrap::name << std::endl;
}

void DiamondTrap::print()
{
	std::cout << ORANGE << "DiamondTrap " << this->name << RESET << std::endl
	<< BLUE << "hitPoints " << this->hitPoints << std::endl
	<< "energyPoints " << this->energyPoints << std::endl
	<< "attackDamage " << this->attackDamage << RESET << std::endl << std::endl;
}
