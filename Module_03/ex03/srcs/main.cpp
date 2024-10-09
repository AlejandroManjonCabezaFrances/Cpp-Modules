/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 03:37:28 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/09 15:26:46 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

/* • ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (Scavtrap)
 */
int main()
{
    /* ClapTrap person2("ALVARO"); */
    DiamondTrap test;
    DiamondTrap person("ALEX");
    FragTrap person3;
    ScavTrap person4;

    person.whoAmI();
/*     person.attack("LAURA"); */
    person.print();
    person3.print();
    person4.print();
   /*  person.print(); */

    return (0);
}

/* En constructor sin parametros, he tenido que inicializar las variables
ya que al poner en int main  FragTrap person3; inicializaba la var. con valores basura,
Debería hacerlo siempre en los demás contructores sin parametros de todas las clases????? */
