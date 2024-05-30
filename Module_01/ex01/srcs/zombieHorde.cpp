/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:04:31 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/30 07:00:09 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde;
    int     lastName;
    int i;

    lastName = 1; 
    horde = new Zombie[N];
    for (i = 0; i < N; i++)
    {
        horde[i].nameZombie(name, lastName);
        ++lastName;
    }
    return (horde);
}
