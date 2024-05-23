/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:06:48 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/23 07:40:15 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
	private:
		std::string	name;	
	public:
		Zombie(std::string _name);
		~Zombie();
		void announce(void);
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif