/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:48:32 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/04 18:30:54 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "../include/Colors.hpp"

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cctype>    // para isdigit

class ClapTrap
{
	private:
		std::string name;
		std::string nameTarget;
		int         hitPoints;
		int         energyPoints;
		int         attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& constrCopy);
		ClapTrap& operator=(const ClapTrap& constrCopy);
		~ClapTrap();

		int getAttackDamage();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
