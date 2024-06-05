/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:39 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/05 07:31:46 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON.HPP
#define WEAPON.HPP

#include <iostream>

class Weapon
{
	private:
	std::string	str;
	public:
	Weapon();
	~Weapon();
	getType();
	setType();
	
};

#endif
