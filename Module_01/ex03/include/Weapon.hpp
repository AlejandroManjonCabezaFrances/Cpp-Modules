/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:39 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/17 19:05:51 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
// #include "HumanA.hpp"
// #include "HumanB.hpp"

class Weapon
{
	private:
	std::string	type;
	public:
	Weapon(std::string type);
	~Weapon();
	
	/* getters */
	std::string getType();
	
	/* setters */
	void 		setType(std::string _type);
};




#endif
