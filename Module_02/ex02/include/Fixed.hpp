/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 07:14:58 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/31 08:05:57 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				number;
		static const int	bit = 8;
	public:
		// Constructors
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
        
		// Copy constructor
		Fixed(const Fixed& constrCopy);
        
		// Assigned operator
		Fixed& operator=(const Fixed& constrCopy);
        
		~Fixed();

        
	
};

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy);

#endif