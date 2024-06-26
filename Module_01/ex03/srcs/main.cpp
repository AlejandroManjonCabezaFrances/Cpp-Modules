/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:51 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/26 02:35:08 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

//crude spiked club = garrote tosco con púas
// some other type of club = algún otro tipo de garrote
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob ", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {   
        Weapon club = Weapon("crude spiked club");
        
        HumanB jim("Jim");
        jim.setWeapon(nullptr);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}