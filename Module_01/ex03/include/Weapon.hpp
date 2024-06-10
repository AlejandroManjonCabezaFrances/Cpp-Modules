/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:39 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/10 07:02:16 by amanjon-         ###   ########.fr       */
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
	Weapon();
	~Weapon();
	
	/* getters */
	std::string getType();
	
	/* setters */
	void 		setType(std::string _type);
};




#endif
