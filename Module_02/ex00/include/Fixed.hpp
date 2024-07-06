/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:54:51 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/06 14:43:26 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED.HPP
#define FIXED.HPP

#include <iostream>

/* ◦ A default constructor that initializes the fixed-point number value to 0.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value.
◦ A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number. */

/**
 *  Class in Orthodox Canonical Form
 * 1. Constructor 
 * 2. Copy constructor
 * 3. Copy assignment operator copy/overload
 * 4. Destructor
*/

class Fixed
{
	private:
		static const int	bit;
		int					store;
	public:
		Fixed(int store);
		Fixed(const Fixed& constrCopy);
		Fixed& operator=(const Fixed& constrCopy);
		~Fixed();
		int		getRawBits(void);
		void	setRawBits(int const raw);
	
};




#endif