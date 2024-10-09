/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:48:23 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/09 14:24:44 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << YELLOW << "ClapTrap " << this->name << " New person has been created." << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
	: name(_name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << YELLOW << "ClapTrap " << this->name << " New person has been created." << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "ClapTrap " << this->name << " has finished the mision !" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& constrCopy)
{
	this->name = constrCopy.name;
	this->hitPoints = constrCopy.hitPoints;
	this->energyPoints = constrCopy.energyPoints;
	this->attackDamage = constrCopy.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& constrCopy)
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

int ClapTrap::getAttackDamage()
{
	return (this->attackDamage);
}

bool areAllDigits(const std::string& str)
{
	size_t i;
	for (i = 0; i < str.size(); i++)
	{
		if(str[i] >= '1' && str[i] <= '9' && str[1] == '\0')
			return (true);
	}
	return (false);
}

void ClapTrap::attack(const std::string& target)
{
	std::string inputDamage;
	int			countDamage;

	this->nameTarget = target;
	std::cout << std::endl << "                *** ATTACK ***" << std::endl;
	std::cout << "Enter attackDamage value you want (1-9): " << std::endl;
	while (1)
	{
		if (std::cin.eof())
			break;
		if (this->energyPoints == 0 || this->hitPoints == 0)
		{
			std::cout << this->name << " hasn `t energy points" << std::endl;
			std::cout << this->nameTarget << " or hasn `t hit points" << std::endl;
			break;
		}
		else
			this->energyPoints -= 1;
		std::cin >> inputDamage;
		if (!inputDamage.empty() && areAllDigits(inputDamage))
		{
			countDamage = atoi(inputDamage.c_str());
			this->attackDamage = countDamage; 
			break;
		}
		else
			std::cout << "Enter only numbers from 1 to 9, please !" << std::endl;
	}
	std::cout << RED << "ClapTrap " << this->name << " Attacking " << target << " causing " << this->attackDamage << " points of damage!" << RESET << std::endl;
	std::cout << MAGENTA << "ClapTrap " << this->name << " has " << this->energyPoints << " energy points, due to his attack" << RESET << std::endl << std::endl;;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints != 0)
	{
		std::cout << "                *** TAKE DAMAGE ***" << std::endl;
		this->hitPoints -= amount;
		std::cout << MAGENTA << "ClapTrap " << this->nameTarget << " has " << this->hitPoints << " hit points" << RESET << std::endl << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "                *** BE REPAIRED ***" << std::endl;
	this->hitPoints += amount;
	std::cout << GREEN << "ClapTrap " << this->nameTarget << " Win + " << amount << " hit points" << RESET << std::endl;	
	std::cout << MAGENTA << "ClapTrap " << this->nameTarget << " has " << this->hitPoints << " hit points" << RESET << std::endl << std::endl;
}
