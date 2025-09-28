/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 07:15:06 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/09 12:19:46 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/* *** OUTPUT ***
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016 */

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "b = " << b << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

/* int main( void )
{
	Fixed a(10);
	Fixed b(15);
	Fixed c;

	std::cout << "a = " << a.getNumber() << std::endl;
	std::cout << "b = " << b.getNumber() << std::endl;
	std::cout << "(a == b) = " << (a == b) << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	
	c = a.getNumber() + b.getNumber();
	std::cout << "c = " << c << std::endl;
	
	c = a + b;
	std::cout << "c = " << c << std::endl;
	
	return (0);
} */
