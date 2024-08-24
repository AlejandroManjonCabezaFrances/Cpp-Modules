/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:48:32 by amanjon-          #+#    #+#             */
/*   Updated: 2024/08/24 20:45:40 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <iomanip>
#include <cmath>

class ClapTrap
{
	private:
		std::string name;
		int         hit;
		int         energy;
		int         damage;
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& constrCopy);
		ClapTrap& operator=(const ClapTrap& constrCopy);
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &output, const ClapTrap& constrCopy);

#endif