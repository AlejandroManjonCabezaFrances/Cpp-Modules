/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 07:15:06 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/31 07:56:42 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* *** OUTPUT ***
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.10 */

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}
