/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:13:38 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/04 19:21:07 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(const std::string& _name);
	FragTrap(const FragTrap& constrCopy);
	FragTrap& operator=(const FragTrap& constrCopy);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys();
;	void print();
};


#endif