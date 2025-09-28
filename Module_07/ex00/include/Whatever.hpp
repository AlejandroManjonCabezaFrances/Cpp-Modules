/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:23:55 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/29 11:25:43 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <iomanip>

/**
 * Eficiencia "&": Evitas crear copias adicionales de los objetos, mejorando la eficiencia.
 * Seguridad "const": Garantizas que los valores no se modifiquen accidentalmente dentro de la función,
   lo cual es importante para funciones como min/max, donde no quieres alterar los argumentos.
*/
template <typename T>

void	swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

/**
 * if (a > b ? a : b) --> operador ternario (a > b ? true : false)
*/
template <typename T>
T const&	max(T& a, T& b)
{
	if (a > b)
		return (a);
	else 
		return (b);
}

template <typename T>
T const&	min(T const& a, T const& b)
{
	if (a == b)
		return (b);
	return (a < b ? a : b);
}

#endif
