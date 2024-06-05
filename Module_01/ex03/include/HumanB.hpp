/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:35 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/05 07:35:16 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB.HPP
#define	HUMANB.HPP

#include <iostream>

class HumanB
{
	private:
		std::string	name;
		std::string	gun;
	public:
		HumnanB();
		~HumanB();
		attack();	
};

#endif
