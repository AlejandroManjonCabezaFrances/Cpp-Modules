/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:04:26 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/30 07:26:55 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <limits>

class Zombie
{
private:
	std::string	name;
	int			lastName;
public:
	Zombie();
	~Zombie();
	void announce(void);
	void nameZombie(std::string _name, int lastName);
};
Zombie *zombieHorde(int N, std::string name);

#endif