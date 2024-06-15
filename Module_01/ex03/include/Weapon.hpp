/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:39 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/15 22:02:47 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON.HPP
#define WEAPON.HPP

#include <iostream>

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
