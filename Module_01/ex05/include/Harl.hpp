/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:18:26 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/04 17:32:31 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
		std::string level;
	public:
		Harl();
		~Harl();
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void complain(std::string level);
};


#endif