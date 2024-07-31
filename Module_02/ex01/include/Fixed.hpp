/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:43:59 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/31 07:39:07 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

/**
 * Allowed functions : roundf (from <cmath>)
 * El ejercicio anterior fue un buen comienzo, pero nuestra clase es bastante inútil. Solo puede representar el valor 0.0. Agrega los siguientes constructores públicos y funciones miembro públicas a tu clase:

Un constructor que toma un entero constante como parámetro.
Convierte dicho entero al valor correspondiente en punto fijo. El valor de los bits fraccionales se inicializa a 8 como en el ejercicio 00.

Un constructor que toma un número de punto flotante constante como parámetro.
Convierte dicho número al valor correspondiente en punto fijo. El valor de los bits fraccionales se inicializa a 8 como en el ejercicio 00.

Una función miembro float toFloat(void) const;
que convierte el valor en punto fijo a un valor de punto flotante.

Una función miembro int toInt(void) const;
que convierte el valor en punto fijo a un valor entero.

Y añade la siguiente función a los archivos de la clase Fixed:

Una sobrecarga del operador de inserción («) que inserta una representación en punto flotante del número en punto fijo en el objeto de flujo de salida pasado como parámetro.
*/

class Fixed
{
	private:
		int 				number;
		/* float				num; */
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
		int		getRawBits(void);
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy);

#endif