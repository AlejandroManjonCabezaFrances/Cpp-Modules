/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:54:51 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/09 08:02:11 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/**
 * 
 * All instances of Fixed will have access to this same constant bit.
 * Class in Orthodox Canonical Form:
 * 1. Constructor 
 * 2. Copy constructor
 * 3. Copy assignment operator copy/overload
 * 4. Destructor
*/

class Fixed
{
	private:
		static const int	bit = 8;
		int					fixedPoint;
	public:
		Fixed();
		Fixed(const Fixed& constrCopy);
		Fixed& operator=(const Fixed& constrCopy);
		~Fixed();
		int		getRawBits(void);
		void	setRawBits(int const raw);
};

#endif
