/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:51 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/03 15:11:11 by amanjon-         ###   ########.fr       */
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
    Weapon sword("knife");

    HumanA Arturo("Arturo", sword);
    Arturo.attack();

    sword.setType("fork");
    Arturo.attack();

    HumanB Alvaro("Alvaro");
    Alvaro.attack();

    Alvaro.setWeapon(sword);
    Alvaro.attack();

    sword.setType("Granade");
    Arturo.attack();
    Alvaro.attack();

    return (0);
}
