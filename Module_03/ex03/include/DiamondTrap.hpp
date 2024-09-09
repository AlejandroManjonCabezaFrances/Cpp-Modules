/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:33:41 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/09 08:16:24 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
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
	/* void print(); */
};

#endif
