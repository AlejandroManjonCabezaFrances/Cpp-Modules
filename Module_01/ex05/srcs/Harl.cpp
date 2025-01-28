/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:18:32 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/06 08:10:48 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void    Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;	
}

void    Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl; 
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl; 
}

void    Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/**
 * When the string is equal to what I am looking for, it returns an int so that
 * it can be treated in the switch statement
 * @param	std::string level
 * @return	int
*/
int	getLevel(std::string level)
{
	if (level == "debug")
		return (DEBUG);
	if (level == "info")
		return(INFO);
	if (level == "warning")
		return (WARNING);
	if (level == "error")
		return (ERROR);
	return (-1);
}

/**
 * A value is given to the pointer, which points to each corresponding member function.
 * Then this auxiliary function that contains the pointer is called.
 * @param	std::string level
 * @return	void
*/
void   Harl::complain(std::string level)
{
	void (Harl::*pointerFunction)() = NULL;
	switch(getLevel(level))
	{
		case DEBUG:
			pointerFunction = &Harl::debug;
			(this->*pointerFunction)();
			break;
		case INFO:
			pointerFunction = &Harl::info;
			(this->*pointerFunction)();
			break;
		case WARNING:
			pointerFunction = &Harl::warning;
			(this->*pointerFunction)();
			break;
		case ERROR:
			pointerFunction = &Harl::error;
			(this->*pointerFunction)();
			break;
		default:
			std::cout << "Error: method switch" << std::endl;
			break;
	}
}
