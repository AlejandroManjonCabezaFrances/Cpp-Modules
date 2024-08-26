/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:49:50 by amanjon-          #+#    #+#             */
/*   Updated: 2024/08/26 20:13:00 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
    ClapTrap personaje1("Robin");

/*     personaje1.attack("Batman");
    personaje1.takeDamage(personaje1.getAttackDamage());
    personaje1.beRepaired(1); */



/*     personaje1.attack("Batman");
    personaje1.takeDamage(personaje1.getAttackDamage());
    personaje1.beRepaired(1);

    personaje1.attack("Batman");
    personaje1.takeDamage(personaje1.getAttackDamage());
    personaje1.beRepaired(1); */

    

    personaje1.attack("Batman");
    personaje1.attack("Batman");
    personaje1.attack("Batman");
    personaje1.takeDamage(personaje1.getAttackDamage());
    personaje1.beRepaired(20);
        
    return (0);
}