/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:30 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/15 22:28:43 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA.HPP
#define HUMANA.HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack(void);
};






#endif
