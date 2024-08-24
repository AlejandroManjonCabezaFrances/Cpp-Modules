/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 07:14:58 by amanjon-          #+#    #+#             */
/*   Updated: 2024/08/24 16:54:05 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
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

		int getNumber();
		int		toInt(void) const;
		float	toFloat(void) const;
		
		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);

		Fixed& operator+(const Fixed& other);
		Fixed& operator-(const Fixed& other);
		Fixed& operator*(const Fixed& other);
		Fixed& operator/(const Fixed& other);
		// Pre - Post
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& first, Fixed& second);		
		static Fixed& max(Fixed& first, Fixed& second);
		// return copy obj to work other instance (obj received not change)
		static Fixed min(const Fixed& first, const Fixed& second);
		static Fixed max(const Fixed& first, const Fixed& second);
};

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy);

#endif