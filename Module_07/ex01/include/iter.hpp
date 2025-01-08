/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 00:12:19 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/08 02:07:00 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

#include "../include/Colors.hpp"

/**
 * void(*func)(T&) --> Mi intención fué "T func", pero el compilador da error en la 
 llamada a la función "iter(arr, 5, func);", ya que al pasar el 3º argv, el compilador
 no sabe el tipo de dato que tiene.
 Se podría castear explícitamente en la llamada: "iter(arr, 5, func<int>);" o mejor aún,
 usar un puntero a función "(*func)" y señalar el tipo de dato template "(T&)"
*/

template <typename T>
void    iter(T* arr, size_t len, void(*func)(T&))
{
	size_t  i;

	i = 0;
	while (i < len)
	{
		func(arr[i]);
		i++;
	}
}

#endif
