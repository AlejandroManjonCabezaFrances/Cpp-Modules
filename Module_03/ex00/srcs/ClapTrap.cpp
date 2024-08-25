/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:48:23 by amanjon-          #+#    #+#             */
/*   Updated: 2024/08/25 19:05:51 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Superman";
	std::cout << "ClapTrap " << this->name << " Creating a new person" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
	: name(_name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap " << this->name << " Creating a new person" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " Destruction Total" << std::endl;
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

bool areAllDigits(const std::string& str)
{
	size_t i;
	for (i = 0; i > str.size(); i++)
	{
		if(str[i] >= '1' && str[i] <= '9')
			return (true);
	}
	return (false);
}

void ClapTrap::attack(const std::string& target)
{
	this->hitPoints -= 1;
	
	std::string inputDamage;
	int			inputDamageInt;
	
	std::cout << "Enter attackDamage do you want: " << std::endl;
	while (1)
	{
		if (std::cin.eof())
			break;
		std::cin >> inputDamage;
		if (!inputDamage.empty() && !areAllDigits(inputDamage))
		{
			std::cout << "input is ok" << std::endl;
			inputDamageInt = atoi(inputDamage.c_str());
			this->attackDamage -= inputDamageInt;
			break;
		}
		else
			std::cout << "input is empty or not number" << std::endl;
	}
	
	std::cout << "ClapTrap " << this->name << " Attacking " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	std::cout << "hitPoints = " << this->hitPoints << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " has " << this->hitPoints << " energyPoints" << std::endl;
	
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " Win +1 health point" << std::endl;	
	std::cout << this->name << " have " << this->energyPoints << " health points" << std::endl;
	this->energyPoints += amount;
}

std::ostream& operator<<(std::ostream &output, const ClapTrap& constrCopy)
{
	output << constrCopy;
	return (output);
}
