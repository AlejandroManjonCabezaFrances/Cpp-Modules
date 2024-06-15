/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:35 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/15 22:43:33 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB.HPP
#define	HUMANB.HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		weapon;
	public:
		HumanB(std::string	name, Weapon* weapon);
		~HumanB();
		attack();	
};

#endif
