/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:33:41 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/09 15:13:31 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string& _name);
		DiamondTrap(const DiamondTrap& constrCopy);
		DiamondTrap& operator=(const DiamondTrap& constrCopy);
		~DiamondTrap();

		void attack(const std::string& target);
		void whoAmI();
		void print();
};

#endif
