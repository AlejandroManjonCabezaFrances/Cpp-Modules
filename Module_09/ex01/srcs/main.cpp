/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:25:14 by amanjon-          #+#    #+#             */
/*   Updated: 2025/09/28 16:12:05 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

/**
* Particularidades --> Aunque en la pila halla más de dos números, siempre se 
  gestionarán los dos últimos de la pila
 
* $> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42
$> ./RPN "7 7 * 7 -"
42
$> ./RPN "1 2 * 2 / 2 * 2 4 - +"
0
$> ./RPN "(1 + 1)"
Error
$>

*/
int main(int argc, char **argv)
{
    /* (void) argv; */
    
    try
    {
        if (argc != 2)
            throw(std::invalid_argument("Error: two arguments required"));
        else
            RpnFunction(argv[1]);
    }
    catch(const std::exception &error)
    {
        std::cerr << error.what() << std::endl;    
    }
    
    return (0);
}
