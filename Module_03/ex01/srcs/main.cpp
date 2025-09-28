/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 03:37:28 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/04 17:41:03 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main()
{
/*     ClapTrap personaje1("Robin");

	personaje1.attack("Batman");
	personaje1.takeDamage(personaje1.getAttackDamage());
	personaje1.beRepaired(1); */

    ScavTrap personajeA("R2-D2");
    personajeA.attack("Abuela del Visillo");
    personajeA.guardGate();
    personajeA.print();

    ScavTrap personajeB(personajeA);
    personajeB.attack("Caña Dulce");
    personajeB.print();
		
	return (0);
}