/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/04 17:42:01 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main()
{
    Harl harl;
    while (1)
    {
        std::string input;
        std::cout << "Enter: debug, info, warning, error" << std::endl;
        std::cin >> input;
        std::cout << "input = " << input << std::endl;
        
        if (input == "debug" || input == "info" || input == "warning" || input == "error")
            harl.complain(input);
    }
    return(0);
}