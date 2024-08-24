/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:48:23 by amanjon-          #+#    #+#             */
/*   Updated: 2024/08/24 20:57:09 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Prueba constructor";
	std::cout << "Creating a new person" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
	: name(_name), hit(10), energy(10), damage(0) 
{
	std::cout << "Creating a new person" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Called function: Destruction Total" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& constrCopy)
{
	this->name = constrCopy.name;
	this->hit = constrCopy.hit;
	this->energy = constrCopy.energy;
	this->damage = constrCopy.damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& constrCopy)
{
	if (this != &constrCopy)
	{
		this->name = constrCopy.name;
		this->hit = constrCopy.hit;
		this->energy = constrCopy.energy;
		this->damage = constrCopy.damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << this->name << " Attacking " << target << "causing " << this->damage << " points of damage!" << std::endl;
	this->hit -= -1;
	this->energy -= -1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " Win +1 health point" << std::endl;	
	std::cout << this->name << " have " << this->energy << " health points" << std::endl;
}

std::ostream& operator<<(std::ostream &output, const ClapTrap& constrCopy)
{
	output << constrCopy;
	return (output);
}
