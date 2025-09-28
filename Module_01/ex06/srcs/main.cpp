/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 07:47:25 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/06 08:44:50 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

/**
 * The object is created and parse arguments
 * @param	void
 * @return	int
*/
int main(int argc, char **argv)
{
	Harl harl;
	std::string input;
	
	if (argc != 2)
	{
		std::cout << "Error: Just 2 arguments (DEBUG, INFO, WARNING, ERROR)";
		return (1);
	}
	input = argv[1];
	harl.complain(input);
		
	return(0);
}