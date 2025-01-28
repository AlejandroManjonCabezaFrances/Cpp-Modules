/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:06:48 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/03 16:06:58 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>


/**
 * *newZombie --> Create zombie in the heap
 * randomChump --> Crea un zombie en la pila Create zombie in the stack
*/
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