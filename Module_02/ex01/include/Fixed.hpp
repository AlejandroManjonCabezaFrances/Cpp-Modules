/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:43:59 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/07 12:45:08 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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