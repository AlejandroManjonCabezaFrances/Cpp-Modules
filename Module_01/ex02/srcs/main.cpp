/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 08:16:45 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/30 08:44:25 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Write a program that contains:
// • A string variable initialized to "HI THIS IS BRAIN".
// • stringPTR: A pointer to the string.
// • stringREF: A reference to the string.

// Your program has to print:
// • The memory address of the string variable.
// • The memory address held by stringPTR.
// • The memory address held by stringREF.

// And then:
// • The value of the string variable.
// • The value pointed to by stringPTR.
// • The value pointed to by stringREF.

int main()
{
    std::string stringPTR;
    // std::string stringREF;

    stringPTR = "HI THIS IS BRAIN";

    std::cout << &stringPTR << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringPTR[0] << std::endl;
    
    std::cout <<  stringPTR.size() << std::endl;
    
    return (0);
}

// char *ptr:

// ptr = "HI THIS IS BRAIN";