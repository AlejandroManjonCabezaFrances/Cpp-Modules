/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 07:59:59 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/03 12:08:17 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "A Zombie is created from the stack!" << std::endl;
    Zombie zombie1("Homer");
    zombie1.announce();
    
    std::cout << "Other Zombie is created from the heap!" << std::endl;
    Zombie *zombie2;
    zombie2 = newZombie("Bart");
    zombie2->announce();
    
    std::cout << "RandomChump Zombie is created" << std::endl;
    randomChump("Lisa");

    delete (zombie2);
    return (0);
}