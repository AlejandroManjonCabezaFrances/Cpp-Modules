/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 03:37:28 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/02 00:46:00 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main()
{
	ClapTrap personaje1("Robin");
	ClapTrap personaje2("Superman");
	ClapTrap personaje3;

	personaje1.attack("Batman");
	personaje1.takeDamage(personaje1.getAttackDamage());
	personaje1.beRepaired(1);

	personaje2.attack("Capitán América");
	personaje2.takeDamage(personaje2.getAttackDamage());
	personaje2.beRepaired(2);

	personaje1.attack("Batman");
	personaje1.takeDamage(personaje1.getAttackDamage());
	personaje1.beRepaired(1);

	
	
/*     personaje1.attack("Batman");
	personaje1.takeDamage(personaje1.getAttackDamage());
	personaje1.beRepaired(1);

	personaje1.attack("Batman");
	personaje1.takeDamage(personaje1.getAttackDamage());
	personaje1.beRepaired(1); */

	
	
/*     personaje1.attack("Batman");
	personaje1.attack("Batman");
	personaje1.attack("Batman");
	personaje1.takeDamage(personaje1.getAttackDamage());
	personaje1.beRepaired(20); */
		
	return (0);
}