/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:51 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/03 14:02:13 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

//crude spiked club = garrote tosco con púas
// some other type of club = algún otro tipo de garrote
/* int main()
{
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);

    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}
{
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");

    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}
    return 0;
} */

int main()
{
    // Crear el objeto Weapon
    Weapon sword("knife");

    // Crear el objeto HumanA con un arma en el constructor
    HumanA arthur("Arthur", sword);
    arthur.attack();  // Arthur debe atacar con la espada inicial "Longsword"

    // Cambiar el tipo de arma de Arthur
    sword.setType("Greatsword");
    arthur.attack();  // Arthur ahora debe atacar con "Greatsword"

    // Crear el objeto HumanB sin un arma asignada
    HumanB lancelot("Lancelot");
    lancelot.attack();  // Lancelot no tiene un arma inicialmente

    // Asignar el arma a Lancelot después de su creación
    lancelot.setWeapon(sword);
    lancelot.attack();  // Lancelot debe atacar con "Greatsword" ahora

    // Cambiar el tipo de arma una vez más
    sword.setType("Flaming Greatsword");
    arthur.attack();    // Arthur debe atacar con "Flaming Greatsword"
    lancelot.attack();  // Lancelot también debe atacar con "Flaming Greatsword"

    return (0);
}
