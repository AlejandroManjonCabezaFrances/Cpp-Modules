/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:55 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/15 21:56:32 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

Weapon::~Weapon()
{
}

/*	const std::string&	Weapon::getType(void){} 
	con referencia, más seguro (encapsulamiento)y eficiente.
	no se devuelve una copia del objeto, que este, podría ser modificado son &	*/
std::string	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}