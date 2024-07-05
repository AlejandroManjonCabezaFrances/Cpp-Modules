/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/05 10:24:58 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

/**
 * The object is created and the input is parsed by terminal
 * @param	void
 * @return	int
*/
int main()
{
    Harl harl;
    while (1)
    {
        std::string input;
        std::cout << "Enter: debug, info, warning, error" << std::endl;
        std::cin >> input;
        
        if (input == "debug" || input == "info" || input == "warning" || input == "error")
            harl.complain(input);
        if (std::cin.eof())
            break;
            
    }
    return(0);
}