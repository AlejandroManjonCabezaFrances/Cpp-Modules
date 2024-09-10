/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 03:37:28 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/10 12:42:11 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

/* 	this->name = _name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::ClapTrap::attackDamage; */

int main()
{
    /* ClapTrap person2("ALVARO"); */
    DiamondTrap person("ALEX");
    FragTrap person3;

    person.whoAmI();
    person.attack("LAURA");
    person3.print();

    return (0);
}
