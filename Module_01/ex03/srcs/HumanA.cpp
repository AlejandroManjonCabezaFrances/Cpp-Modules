/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:43 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/17 06:58:02 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Las referencias "&" deben inicializarse en el momento de su creación en "listas de inicialización"
HumanA::HumanA(std::string _name, Weapon& _weapon) : weapon(weapon)
{
   this->name = _name;    
}


HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << this->name << "attacking with " << this->weapon.getType() << std::endl;
}