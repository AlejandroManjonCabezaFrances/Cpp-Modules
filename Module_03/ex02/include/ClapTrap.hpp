/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:48:32 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/04 17:36:10 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "Colors.hpp"

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cctype>    // para isdigit

class ClapTrap
{
	protected:
		std::string name;
		std::string nameTarget;
		int         hitPoints;
		int         energyPoints;
		int         attackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string &_name);
		ClapTrap(const ClapTrap& constrCopy);
		ClapTrap& operator=(const ClapTrap& constrCopy);
		~ClapTrap();

		int getAttackDamage();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

/* std::ostream& operator<<(std::ostream &output, const ClapTrap& constrCopy); */
bool areAllDigits(const std::string& str);

#endif
